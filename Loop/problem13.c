//Write a program in C to make a pyramid pattern with numbers increased by 1

#include <stdio.h>

int main() {
    int i,n, num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}
