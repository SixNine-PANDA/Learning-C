//Write a program in C to insert values in the array (unsorted list).

#include<stdio.h>
int main(){
    int arr1[100];
    int i,x,n,p;
    printf("Number of elements in array: ");
    scanf("%d", &n);

    for(i=0 ; i<n ; ++i){
        printf("Enter the elements: ");
        scanf("%d", &arr1[i]);
    }
    printf("Input the value to be inserted : ");
    scanf("%d", &x);
    printf("Input the Position, where the value to be inserted :");
    scanf("%d", &p);

    printf("The current list of the array :\n");
    for (i = 0; i < n; i++)
    printf("% 5d", arr1[i]);

    for (i = n; i >= p; i--)
    arr1[i] = arr1[i - 1];
    arr1[p - 1] = x;

    printf("\n\nAfter Insert the element the new list is :\n");
    for (i = 0; i <= n; i++)
    printf("% 5d", arr1[i]); 

    return 0;
}