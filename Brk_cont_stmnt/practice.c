#include<stdio.h>
int main(){

    int i;
    int sum=0,value=0;

    printf("Enter 10 integers:");

    for(i=0 ; i<=10 ; ++i){
        if(sum>=50){
            printf("Your sum is greater than 50, so you cannot enter anymore number.Sum value is : %d",sum);
            break;
        }
        scanf("%d",&value);
        sum=sum+value;

    }

    return 0;
}
