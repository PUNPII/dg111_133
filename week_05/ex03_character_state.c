#include <stdio.h>

int main()
{

    int max_hp, dmg, is_poisoned, attack_count;

    printf("Max HP: ");
    scanf("%d", &max_hp);
    printf("Damage Taken: ");
    scanf("%d", &dmg);
    printf("Poisoned (0/1): ");
    scanf("%d", &is_poisoned);
    printf("Attack Count: ");
    scanf("%d", &attack_count);

    _Bool is_poisoned_state = is_poisoned;
    //_Bool attack_count_state = attack_count;
    int hp = max_hp - dmg;

    if (hp < 0)
        hp = 0;

    printf("=== Character Status ===\n");

    if (hp <= 0)
    {
        printf("State: DEAD\n");
    }
    else if (hp <= max_hp * 0.25)
    {
        printf("State: CRITICAL\n");
    }
    else if (is_poisoned_state == 1)
    {
        printf("State: POISONED\n");
    }
    else
    {
        printf("State: NORMAL\n");
    }

    if (attack_count == 5)
    {
        printf("Ultimate Ready!\n");
    }

    return 0;
}