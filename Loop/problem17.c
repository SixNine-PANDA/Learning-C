// Write a C program to make such a pattern like a pyramid with a number which will repeat the number in the same row.

#include <stdio.h>

int main() {
    int n, i, j, k;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
