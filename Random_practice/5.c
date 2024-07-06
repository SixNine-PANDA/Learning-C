#include <stdio.h>

int main() {
    int woodenPlanks; 
    int sticks;  

    printf("How many planks do you have: ");
    scanf("%d", &woodenPlanks);

    printf("How many sticks do you have: ");
    scanf("%d", &sticks);

    if (woodenPlanks >= 3 && sticks >= 2) {
        printf("You have enough materials to craft a wooden pickaxe!\n");
    } else {
        printf("You don't have enough materials to craft a wooden pickaxe.\n");
    }

    return 0;
}
