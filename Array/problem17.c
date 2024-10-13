//Write a program in C to find the second smallest element in an array.

#include<stdio.h>
int main(){

    int arr1[50], n, i, j = 0;
    int min,min2nd;

    printf("Number of elements in array: ");
    scanf("%d", &n);

    for(i=0 ; i<n ; ++i){
        printf("Enter the elements: ");
        scanf("%d", &arr1[i]);
    }

    min = arr1[0];
    for (i = 0; i < n; i++) {
        if (min > arr1[i]) {
            min = arr1[i];
            j = i;
        }
    }

    min2nd = 99999;
    for (i = 0; i < n; i++) {
        if (i == j) {
            i++;
            i--;
        } else {
            if (min2nd > arr1[i]) {
                min2nd = arr1[i];
            }
        }
    }

     printf("The Second smallest element in the array is :  %d ", min2nd);


    return 0;
}