#include <stdio.h>

int main()
{
    printf("1. Expressions : 10 / 3 = %d\n", 10 / 3);

    int expressions_1 = 10 / 3;
    printf("2. Expressions_1 : 10 / 3 = %d\n", expressions_1);

    float expressions_2 = 10.0 / 3;
    printf("3. Expressions_2 : 10 / 3 = %f\n", expressions_2);

    float expressions_3 = 10 / 3;
    printf("4. Expressions_3 : 10 / 3 = %f\n", expressions_3);

    int expressions_4 = 10 % 3;
    printf("5. Expressions_4 : 10 %% 3 = %d\n", expressions_4);

    int expressions_5 = -7 % 3;
    printf("6. Expressions_5 : -7 %% 3 = %d\n", expressions_5);

    int expressions_6 = 7 % -3;
    printf("7. Expressions_6 : 7 %% -3 = %d\n", expressions_6);

    int x = 5;
    printf("x++ = %d\n", x++);
    printf("x = %d\n", x);
    x = 5;
    printf("++x = %d\n", ++x);
    printf("x = %d\n", x);

    printf("2 + 3 * 4 = %d\n", 2 + 3 * 4);
    printf("(2 + 3) * 4 = %d\n", (2 + 3) * 4);
    printf("10 - 2 - 3 = %d\n", 10 - 2 - 3);
    printf("2*3 + 4*5 = %d\n", 2 * 3 + 4 * 5);

    return 0;
}