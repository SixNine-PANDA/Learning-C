//Write a C program to calculate the factorial of a given number.

#include <stdio.h>  // Include the standard input/output header file.

int main(){
  int i, j = 1, num;

  printf("Input the number : ");
  scanf("%d", &num);

  for(i = 1; i <= num; i++) 
      j = j * i;
  printf("The Factorial of %d is: %d\n", num, j); 

  return 0;
}