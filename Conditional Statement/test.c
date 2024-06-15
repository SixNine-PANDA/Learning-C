#include<stdio.h>

int main(){

    int a,b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("\nEnter b: ");
    scanf("%d", &b);

    if(a>=b){
        if(a==b){
            printf("%d is = %d",a,b);
        }
        else{
            printf("%d > %d",a,b);
        }
    }
    else{
        printf("hello %d < %d",a,b);
    }

    return 0;
}