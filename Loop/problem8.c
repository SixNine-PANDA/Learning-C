//Write a C program to display the n terms of odd natural numbers and their sum

#include<stdio.h>
int main(){

    int i,j,sum;
    printf("Enter the number of terms: ");
    scanf("%d",&j);
    printf("the first %d odd natural numbers are : \n", j);
    for (int i=0 ; i<=j ; ++i){
        if(i%2!=0){
            printf("%d, ",i);
            sum=sum+i;
        }
    }
    printf("Sum: %d",sum);
    


    return 0;
}