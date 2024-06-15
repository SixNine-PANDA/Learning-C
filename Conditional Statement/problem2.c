//Write a C program to check whether a given number is even or odd.
//Test Data : 15

#include <stdio.h>
#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d even number.\n", number);
    } else {
        printf("%d odd number.\n", number);
    }

    return 0;
}
