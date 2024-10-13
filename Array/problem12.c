//Write a program in C to sort the elements of the array in descending order.

#include<stdio.h>
int main(){
    int arr1[100];
    int i,j,n,tmp;
    printf("Number of elements in array: ");
    scanf("%d", &n);

    for(i=0 ; i<n ; ++i){
        printf("Enter the elements: ");
        scanf("%d", &arr1[i]);
    }
    for(i=0 ; i<n ; i++){
        for(j=i+1 ; j<n ; j++){
            if(arr1[i]<arr1[j]){
                tmp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=tmp;
            }
        }
    } 
    printf("The elements in descending order are: ");
    for(i=0 ; i<n ; i++){
        printf("%d", arr1[i]);
    }

    return 0;
}