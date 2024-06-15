 //Write a C program to check whether a given number is positive or negative.
//Test Data : 15.

#include <stdio.h>
int main(){
int num;
printf("Enter the number:");
scanf("%d", &num);

if(num>=0)
    printf("positive");
else
    printf("negative");
return 0;
}