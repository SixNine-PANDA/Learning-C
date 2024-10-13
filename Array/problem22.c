//Write a program in C for a 2D array of size 3x3 and print the matrix.

#include<stdio.h>
int main(){

    int arr[3][3],i,j;
    
    printf("Enter the elements of the matrix: ");
    for(i=0 ; i<3 ; i++){
        for(j=0 ; j<3 ; j++){
            printf("element - [%d][%d] : ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The matrix is: ");
    for(i=0; i<3 ; i++){
        printf("\n");
        for(j=0 ; j<3; j++){
            printf("%d", arr[i][j]);
        }
    }

    return 0;
}