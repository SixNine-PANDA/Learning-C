//Write a program in C to print all unique elements in an array.

#include<stdio.h>
int main(){

    int i,j,n,ctr=0;
    int arr[n];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    for(i=0 ; i<n ; ++i){
        printf("Enter the elements: ");
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n+1;j++){
            if(i != j){
                if(arr[i]==arr[j]){
                    ctr++;
                }
            }
        }
        if(ctr==0){
            printf("%d ", arr[i]);
        }
    }

    
    return 0;
}