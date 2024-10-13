// Write a program in C to separate odd and even integers into separate arrays.

#include<stdio.h>
int main(){

    int arr1[100],arr2[100],arr3[100];
    int i,j=0,k=0,n;

    printf("Number of elements in array: ");
    scanf("%d", &n);

    for(i=0 ; i<n ; ++i){
        printf("Enter the elements: ");
        scanf("%d", &arr1[i]);
    }
    for(i=0;i<n;i++){
        if(arr1[i]%2==0){
            arr2[j]=arr1[i];
            j++;
        }
        else{
            arr3[k]=arr1[i];
            k++;
        }
    } 
    printf("The even elements are: ");
    for(i=0; i<j; i++){
        printf("%d", arr2[i]);
    }
    printf("The Odd elements are: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    } 

    return 0;
}