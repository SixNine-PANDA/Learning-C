#include <stdio.h>

int main(){ 
    
    int n,sum=0;
    scanf("%d", &n);

    if (n < 10000 || n > 99999) {
        printf("Please enter a valid number.\n");
    }

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("%d", sum);
    
    
    
    
    
    return 0;
}