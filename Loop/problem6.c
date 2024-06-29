//Write a program in C to display the multiplication table for a given integer.

#include<stdio.h>
int main(){

    int i,j;
    printf("Enter the integer: \n");
    scanf("%d", &j);
    for(i=0 ; i<=10 ; ++i){
        printf("%d x %d = %d\n",j,i,j*i);
    }

    return 0;
}