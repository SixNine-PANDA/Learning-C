//Write a program in C to find the second largest element in an array.

#include<stdio.h>
int main(){

    int arr1[50], n, i, j = 0;
    int max,max2nd;

    printf("Number of elements in array: ");
    scanf("%d", &n);

    for(i=0 ; i<n ; ++i){
        printf("Enter the elements: ");
        scanf("%d", &arr1[i]);
    }

    max=0;
    for (i = 0; i < n; i++) {
        if (max < arr1[i]) {
            max = arr1[i];
            j = i;
        }
    } 
    max2nd=0;
    for (i = 0; i < n; i++) {
        if (i == j) {
            i++;
            i--;
        } else {
            if (max2nd < arr1[i]) {
                max2nd = arr1[i];
            }
        }
    }

     printf("The Second largest element in the array is :  %d ", max2nd);



    return 0;
}