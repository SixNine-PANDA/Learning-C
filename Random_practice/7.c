#include <stdio.h>

int main() {
    int money,mission_reward,item_cost;

    printf("How much money does the player have: ");
    scanf("%d", &money);

    printf("How much is the mission reward: ");
    scanf("%d", &mission_reward) ;

    printf("What is the item cost: ");
    scanf("%d", &item_cost);    
     

    printf("Player earned %d money from completing a mission.\n", mission_reward);
    money += mission_reward;

    printf("Player bought an item from the store costing %d money.\n", item_cost);
    money -= item_cost;

    printf("Remaining money: %d\n", money);

    return 0;
}
