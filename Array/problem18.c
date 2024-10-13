//Write a program in C for a 2D array of size 3x3 and print the matrix.

#include<stdio.h>
int main(){

    int r,c;
    int i=0;
    int j=0;

    printf("Input number of rows: ");
    scanf("%d", &r);

    printf("Input number of coloumn: ");
    scanf("%d", &c);

    int arr[r][c];


    printf("Input element in matrix: ");
    for(i=0 ; i<r ; i++){
        for(j=0 ; j<c ; j++){
            printf("Element- [%d][%d]\n", i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The new matrix is: \n");
    for(i=0 ; i<r ; i++){
        for(j=0 ; j<c ; j++){
            printf("Element: [%d][%d]: %d \n",i,j ,arr[i][j]);
        }
    }


    return 0;
}