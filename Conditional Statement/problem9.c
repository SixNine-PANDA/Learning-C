//Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
//Test Data : 7 9

#include <stdio.h>
int main(){

    int a,b;

     printf("Input X and Y coordinate : ");
    scanf("%d %d", &a, &b); 

      if (a > 0 && b > 0)
        printf("%d,%d First quadrant.\n", a , b); 

    else if (a < 0 && b > 0)
        printf("%d,%d Second quadrant.\n", a , b); 

    else if (a < 0 && b < 0)
        printf("%d, %d Third quadrant.\n", a , b); 

    else if (a > 0 && b < 0)
        printf("%d,%d Fourth quadrant.\n", a , b); 

    else if (a == 0 && b == 0) 
        printf("%d,%d origin.\n", a, b);

    return 0;
}