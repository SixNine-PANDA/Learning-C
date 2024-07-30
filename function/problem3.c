//Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.

#include<stdio.h>

int findFactorial(int n){
    int factorialValue=n;
    while(n>1){
        factorialValue=factorialValue*(n-1);
        n--;
    }
    return factorialValue;
}

int main(){

    double sumOfSeries=(findFactorial(1)/1)+(findFactorial(2)/2)+(findFactorial(3)/3)+(findFactorial(4)/4)+(findFactorial(5)/5);
    printf("Sum of the series: %lf",sumOfSeries);

    return 0;
}