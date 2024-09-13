// Write a program in C to store elements in an array and print them

#include<stdio.h>
int main(){
    int n,i, arr[n];

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    for(i=0 ; i<n ; ++i){
        printf("Enter the element: i+1");
        scanf("%d", &arr[i]);
    }
    printf("The elements in the array are: ");
    for(i=0 ; i<n ; ++i){
        printf("%d", arr[i]);
    }




    return 0;
}