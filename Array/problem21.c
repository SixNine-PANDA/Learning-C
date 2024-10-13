//Write a program in C for the multiplication of two square matrices.

#include<stdio.h>
int main(){

    int i,j,k;
    int r1,c1,r2,c2;
    int sum=0;

    printf("Input rows and coloumn of the first matrix: ");
    scanf("%d %d ", &r1, &c1);

    printf("Input rows and coloumn of the second matrix: ");
    scanf("%d ", &r2, &c2);

    int arr1[r1][c1];

    if( c1 != r2){
        printf("Multiplication not possible , row and coloumn must be same ");
    }
    else{
        printf("Input the elements of the first matrix: ");
        for(i=0; i<r1 ; i++){
            for(j=0 ; j<c1 ; j++){
                printf("Element- [%d][%d] : ");
                scanf("%d" , &arr1[i][j]);
            }
        }
    }

    int arr2[r2][c2];

    printf("Input elements of second matrix: ");
    for(i=0 ; i<r2 ; i++){
        for(j=0 ; j<c2 ; j++){
            printf("Element- [%d],[%d] : ", i,j);
            scanf("%d", arr2[i][j]);
        }
    }

    printf("\nThe First matrix is:\n");
    for (i = 0; i < r1; i++) {
        printf("\n");
        for (j = 0; j < c1; j++){
            printf("%d\t", arr1[i][j]);
        }
    }

    printf("\nThe Second matrix is:\n");
    for (i = 0; i < r2; i++) {
        printf("\n");
        for (j = 0; j < c2; j++){
            printf("%d\t", arr2[i][j]);
        }
    }

    int arr3[50][50];

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            sum = 0;
            for (k = 0; k < c1; k++){
                sum = sum + arr1[i][k] * arr2[k][j];
                arr3[i][j] = sum;
            }
        }    
    }

    printf("\nThe multiplication of two matrices is:\n");
    for (i = 0; i < r1; i++) {
        printf("\n");
        for (j = 0; j < c2; j++){
            printf("%d\t", arr3[i][j]);
        }
    }

    printf("\n\n");

    return 0;
}