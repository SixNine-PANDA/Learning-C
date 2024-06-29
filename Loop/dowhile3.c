#include<stdio.h>
int main (){

    int j,sum=0;
    printf("Enter the number of terms: ");
    scanf("%d", &j);
    printf("The first %d odd numbers are: \n", j);
    int i=0;
    do{
        if(i%2!=0){
                printf("%d, ",i);
                sum=sum+i;
            }
        i++;
    }while(i<=j);

    printf("the sum of the numbers are: %d", sum);

}