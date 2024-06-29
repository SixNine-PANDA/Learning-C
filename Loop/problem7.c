//Write a program in C to display the multiplier table vertically from 1 to n

#include<stdio.h>
int main(){

    int i,j;
    printf("Enter the integer: \n");
    scanf("%d", &j);
    for(i=0 ; i<=10 ; ++i){
        printf("%d x %d = %d, ",j,i,j*i);
    }

    return 0;
}