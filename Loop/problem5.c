//Write a program in C to display the cube of the number up to an integer.

#include<stdio.h>
int main(){
    
    int i,j;
    printf("Number of terms: ");
    scanf("%d",&j);
    for(i=0 ; i<=j ; ++i){
        printf("The number is : %d and the cube is : %d \n", i,i*i*i);
    }




    return 0;
}