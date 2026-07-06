#include <stdio.h>

int main()
{
    char name[50];
    int hp;
    int attack_power;
    int defense;
    int level;

    printf("=== Create Character ===\n");

    printf("Name: ");
    scanf("%s", name);
    printf("Max HP: ");
    scanf("%d", &hp);
    printf("Attack Power: ");
    scanf("%d", &attack_power);
    printf("Defense: ");
    scanf("%d", &defense);
    printf("Level: ");
    scanf("%d", &level);

    printf("\n=== Character Stats ===\n");
    printf("Name: %s\n", name);
    printf("Level: %d\n", level);
    printf("Max HP: %d\n", hp);
    printf("Attack Power: %d\n", attack_power);
    printf("Defense: %d\n", defense);

    return 0;
}