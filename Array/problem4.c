// Write a program in C to copy the elements of one array into another array.

#include<stdio.h>
int main(){

    int n,i,arr1[n],arr2[n];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }
    printf("The copied elements are: ");
    for(i=0; i<n; ++i){
    printf("%d", arr2[i]);
    }


    return 0;
}