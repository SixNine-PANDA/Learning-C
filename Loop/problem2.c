//. Write a program in C to display the first 10 natural numbers.
//Expected Output :
//1 2 3 4 5 6 7 8 9 10

#include <stdio.h>

int main(){

    int i,sum;

    for(i=1; i<=10; i++){
        sum += i;
    }
    printf("Sum = %d ", sum);


    return 0;
}