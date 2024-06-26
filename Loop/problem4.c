//Write a program in C to read 10 numbers from the keyboard and find their sum and average

#include<stdio.h>
int main(){
    int i;
    int value=0;
    int sum=0;
    double avg=0.0;
    printf("Enter 10 integers:");

    for(i=0 ; i<=10 ; ++i){
        scanf("%d",&value);
        sum=sum+value;
    }

    avg=(double)sum / 10;

    printf("The sum of entered numbers are: %d and the average is: %lf",sum,avg);








}