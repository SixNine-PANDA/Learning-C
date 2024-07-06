#include <stdio.h>

int main() {
    int iron_pickaxe;
    int iron_ingots_needed = 0; 

    printf("how many pickaxe do you need: ");
    scanf("%d", &iron_pickaxe);

    for (int i = 0; i < iron_pickaxe; i++) {
        iron_ingots_needed += 3;
    }

    printf("To craft %d iron pickaxes, you need %d iron ingots.\n", iron_pickaxe, iron_ingots_needed);

    return 0;
}
