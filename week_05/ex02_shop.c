#include <stdio.h>

int main()
{

    int item;
    int gold = 1000;
    int price = 0;

    printf("=== ITEM SHOP ===\n");
    printf("Gold: %d\n", gold);
    printf("1. Health Potion - 50 Gold (+50 HP)\n");
    printf("2. Mana Potion - 80 Gold (+30 MP)\n");
    printf("3. Iron Sword - 500 Gold (+20 ATK)\n");
    printf("4. Leather Armor - 300 Gold (+15 DEF)\n");
    printf("5. Exit\n");

    printf("Select Item (1-5): ");
    scanf("%d", &item);

    printf("=== PURCHASE ===\n");

    switch (item)
    {
    case 1:
        price = 50;
        printf("Item: %d, Health Potion : %d Gold\n", item, price);
        gold -= price;
        printf("Remaining : %d\n", gold);
        printf("HP Bonus : +50\n");
        break;
    case 2:
        price = 80;
        printf("Item: %d, Mana Potion : %d Gold\n", item, price);
        gold -= price;
        printf("Remaining : %d\n", gold);
        printf("MP Bonus : +30\n");
        break;
    case 3:
        price = 500;
        printf("Item: %d, Iron Sword : %d Gold\n", item, price);
        gold -= price;
        printf("Remaining : %d\n", gold);
        printf("ATK Bonus : +20\n");
        break;
    case 4:
        price = 300;
        printf("Item: %d, Leather Armor : %d Gold\n", item, price);
        gold -= price;
        printf("Remaining : %d\n", gold);
        printf("DEF Bonus : +15\n");
        break;
    case 5:
        price = 0;
        printf("Item: %d, Exit\n", item);
        printf("Remaining : %d\n", gold);
        break;
    default:
        printf("Invalid input\n");
    }

    if (gold < price)
    {
        printf("Not enough gold!\n");
    }

    printf("Item purchased successfully! ✓\n");

    return 0;
}