#include<stdio.h>
int main(){

    int j,sum=0;
    printf("Enter the number of terms: ");
    scanf("%d", &j);
    printf("The first %d odd numbers are: \n", j);
    int i=1;
    while(i<=j){
        if(i%2!=0){
            printf("%d, ",i);
            sum=sum+i;
        }
        i++;
    }
    printf("The sum of the first 10 odd numbers are: %d", sum);

}