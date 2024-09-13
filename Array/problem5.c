//Write a program in C to count the total number of duplicate elements in an array.

#include<stdio.h>
int main(){

    int i,j,ctr;
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    for(i=0 ; i<n ; ++i){
        printf("Enter the elements: ");
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;++i){
        for(j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                ctr++;
                break;
            }
        }
    }
    printf("Total number of duplicate element: %d\n", ctr);

    return 0;
}