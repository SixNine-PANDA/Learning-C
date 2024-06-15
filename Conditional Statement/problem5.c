//Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.
//Test Data : 21

#include<stdio.h>
int main(){
int age;

     printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("eligible to vote.\n");
    } else {
        printf("not eligible to vote.\n");
    }

    return 0;
}