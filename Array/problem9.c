//Write a program in C to find the maximum and minimum elements in an array.

#include<stdio.h>
int main(){
    int i,n;

    printf("number of elements in array 1: ");
    scanf("%d", &n);
    int arr1[n];

    for(i=0 ; i<n ; ++i){
        printf("Enter the elements: ");
        scanf("%d", &arr1[i]);
    }
    int max=arr1[0];
    int min=arr1[0];

    for(i=0;i<n;i++){
        if(arr1[i]>max){
            max=arr1[i];
        }
        if(arr1[i]<min){
            min=arr1[i];
        }
    }
    printf("max element is : %d ", max);
    printf("min element is : %d ", min);
    return 0;
}