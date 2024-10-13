#include<stdio.h>
int main(){
    int i=0;
    int j=0;
    int n;

    printf("Input size of square matrix: ");
    scanf("%d", &n);

    int arr1[50][50];

    printf("Input element in matrix: ");
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){
            printf("Element- [%d][%d]\n", i,j);
            scanf("%d", &arr1[i][j]);
        }
    }

    int arr2[50][50];

    printf("Input element in matrix: ");
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){
            printf("Element- [%d][%d]\n", i,j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\nThe First matrix is :\n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d ", arr1[i][j]);
    }

    printf("\nThe Second matrix is :\n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d ", arr2[i][j]);
    }
    
    int arr3[50][50];

    for(i=0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){
            arr3[i][j]= arr1[i][j] + arr2[i][2];
        }
    }

    printf("\nThe Addition of two matrix is : \n");
    for (i = 0; i < n; i++) {
        printf("\n");
    for (j = 0; j < n; j++){
            printf("%d\t", arr3[i][j]);
        }
    }

    return 0;
}