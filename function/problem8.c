//Write a program in C to print all perfect numbers in a given range using the function.
#include<stdio.h>
int perfectnumber(int num){
    int sum=0;
        for(int i=1; i<=num/2; i++){
            if(num %i ==0){
                sum += i;
            }
        }
        return(num = sum);
}