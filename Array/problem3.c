// Write a program in C to find the sum of all elements of the array.

#include<stdio.h>
int main(){

    int n, arr[n]; 
    int sum=0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
     for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
     for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("The sum of all elements in the array is: %d\n", sum);

return 0;
}