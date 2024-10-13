//Write a program in C to delete an element at a desired position from an array.

#include<stdio.h>
int main(){
    int arr1[100];
    int i,n,p;
    printf("Number of elements in array: ");
    scanf("%d", &n);

    printf("Input elements in the array in ascending order: ");
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    printf("\nInput the position where to delete: ");
    scanf("%d", &p);

    i = 0;
    while (i != p - 1)
        i++;

    while (i < n) {
        arr1[i] = arr1[i + 1];
        i++;
    }
    n--;

    printf("The new list is : ");
    for (i = 0; i < n; i++) {
        printf("  %d", arr1[i]);
    } 


    return 0;
}