//Write a program in C to display n terms of natural numbers and their sum.
//Test Data : 7

#include<stdio.h>
int main(){
    int n,sum=0;

    printf("Enter the value of n: ");
    scanf("%d",&n);


    printf("the numbers are: \n");

    for(int i=1;i<=n;i++){
        printf("%d ",i);
        sum += i;
    }
    printf("\nSum of the numbers : %d",sum);



    return 0;
}