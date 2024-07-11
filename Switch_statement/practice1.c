#include<stdio.h>
int main(){

    int a;
    
    printf("Enter the value: ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("Green");
        break;

    case 2:
        printf("Yellow");
        break;

    case 3:
        printf("Red");
        break;    
    
    default:
        printf("Traffic is ongoing");
        break;
    }

    return 0;
}