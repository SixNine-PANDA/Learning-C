//Write a C program to make such a pattern as a pyramid with an asterisk.

#include <stdio.h>

int main() {
    int i,n,j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
