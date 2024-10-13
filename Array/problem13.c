// Write a program in C to insert the values in the array (sorted list).

#include<stdio.h>
#define max_size 100

int main(){
    int i,n,p,inval;
    int arr1[max_size+1];

    printf("Number of elements you want to enter: ");
    scanf("%d", &n);

    if(n > max_size){
        printf("Size of array cannot exceed %d", max_size);
        return 1;
    }

    printf("Input elements in the array in ascending order: ", n);
    for (i = 0; i < n; i++) {
    printf("element - %d : ", i);
    scanf("%d", &arr1[i]);
    }
    printf("input the new value: ");
    scanf("%d", &inval);

    printf("The existing array list is :\n");
    for (i = 0; i < n; i++) {
    printf("%d", arr1[i]);
    }

    for (i = 0; i < n; i++) {
        if (inval < arr1[i]) {
            p = i;
            break;
        } else {
            p = i + 1;
        }
    }

    for (i = n; i >= p; i--) {
        arr1[i + 1] = arr1[i];
    }

    arr1[p] = inval;
    printf("\n\nAfter Insert the list is :\n");
    for (i = 0; i <= n; i++) {
        printf("% 5d", arr1[i]);
    }
    
    return 0;
} 