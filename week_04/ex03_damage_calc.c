#include <stdio.h>
#include <math.h>

int main()
{
    int player_atk, enemy_def, hit_num, base_dmg, damage;

    printf("=== COMBAT SIMULATOR ===\n");
    printf("Player Attack: ");
    scanf("%d", &player_atk);
    printf("Enemy Defense: ");
    scanf("%d", &enemy_def);
    printf("Hit Number: ");
    scanf("%d", &hit_num);

    base_dmg = player_atk - enemy_def;

    if (hit_num % 5 == 0)
    {
        damage = (int)ceil((float)base_dmg * 1.5f);
        printf("Damage = %d  *** CRITICAL HIT! x1.5 ***\n", damage);
    }
    else
    {
        damage = base_dmg;
        printf("Damage = %d (Normal)\n", damage);
    }

    return 0;
}