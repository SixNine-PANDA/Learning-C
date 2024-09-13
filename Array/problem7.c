//Write a program in C to merge two arrays of the same size sorted in descending order.

#include<stdio.h>
int main(){


    int n1,n2,n3,i,j,k;

    printf("number of elements in array 1: ");
    scanf("%d", &n1);
    int arr1[n1],arr3[500];

    
    for(i=0 ; i<n1 ; ++i){
        printf("Enter the elements: ");
        scanf("%d", &arr1[i]);
    }

    printf("number of elements in array 2: ");
    scanf("%d", &n2);
    int arr2[n2];
    for(i=0 ; i<n2 ; ++i){
        printf("Enter the elements: ");
        scanf("%d", &arr2[i]);
    }
    n3= n1+n2;

    for(i=0;i<n1;i++){
        arr3[i]=arr1[i];
    }
    for(j=0;j<n2;j++){
        arr3[i]=arr2[j];
        i++;
    }
    for(i=0;i<n3;i++){
        for(k=0;k<n3-1;k++){
            if(arr3[k]<=arr3[k+1]){
                j=arr3[k+1];
                arr3[k+1]=arr3[k];
                arr3[k]=j;
            }
        }
    }
    printf("The merged array in descending order is: ");
    for(i=0;i<n3;i++){
        printf("%d ", arr3[i]);
    }
    return 0;
}