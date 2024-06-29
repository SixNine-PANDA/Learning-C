// Write a C program to display the sum of n terms of even natural numbers.

#include<stdio.h>
int main(){

    int i,j,sum;
    printf("Enter the number of terms: ");
    scanf("%d",&j);
    printf("the first %d even natural numbers are : \n", j);
    for (int i=0 ; i<=j ; ++i){
        if(i%2==0){
            printf("%d, ",i);
            sum=sum+i;
        }
    }
    printf("\nSum: %d",sum);
    


    return 0;
}