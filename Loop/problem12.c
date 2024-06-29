//Write a program in C to make such a pattern like a right angle triangle with the number increased by 1.

#include <stdio.h>  // Include the standard input/output header file.

void main() {
    int i, j,k=1,rows;  // Declare variables 'i' and 'j' for loop counters, 'rows' for user input.

    printf("Input number of rows : ");  // Print a message to prompt user input.
    scanf("%d", &rows);  // Read the value of 'rows' from the user.

    for (i = 1; i <= rows; i++) {  // Start a loop to generate rows of asterisks.
        for (j = 1; j <= i; j++)  // Nested loop to print asterisks based on the current row.
            printf("%d ", k++);  // Print an asterisk.

        printf("\n");  // Move to the next line for the next row.
    }
}
