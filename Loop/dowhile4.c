#include<stdio.h>
int main(){

    int j;
    printf("Enter the integer: ");
    scanf("%d", &j);
    int i=0;
    do{
         printf("%d x %d = %d\n",j,i,j*i);
        i++;
      }while(i<=j);


    }


