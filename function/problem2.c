//Write a program in C to check if a given number is even or odd using the function.
#include<stdio.h>
#include<stdbool.h>

bool checkoddeven(int number){

     if (number % 2 == 0) {
        return true;
    } else {
        return false;
    }
}
int main(){

    int number;
    printf("Enter the number: \n");
    scanf("%d", &number);

    bool check=checkoddeven(number);

    if(check){
        printf("%d was an even number",number);
    }else{
        printf("%d was an odd number",number);

    }

    return 0;
}