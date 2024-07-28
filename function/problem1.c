//Write a program in C to swap two numbers using a function.

#include <stdio.h>

void swapNumbers(int number1, int number2){
    int i=0;
    i=number1;
    number1=number2;
    number2=i;
    printf("After swapping: n1 = %d , n2= %d", number1,number2);

}

int main(){

    int n1,n2,i;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Before swapping: n1= %d , n2= %d\n", n1,n2);

    swapNumbers(n1,n2);

    return 0;
}