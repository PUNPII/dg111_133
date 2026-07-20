#include <stdio.h>

int main()
{

    int day;

    printf("Input Day (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Day: %d, → Monday (Weekday)\n", day);
        break;
    case 2:
        printf("Day: %d, → Tuesday (Weekday)\n", day);
        break;
    case 3:
        printf("Day: %d, → Wednesday (Weekday)\n", day);
        break;
    case 4:
        printf("Day: %d, → Thursday (Weekday)\n", day);
        break;
    case 5:
        printf("Day: %d, → Friday (Weekday)\n", day);
        break;
    case 6:
        printf("Day: %d, → Saturday (Weekend)\n", day);
        break;
    case 7:
        printf("Day: %d, → Sunday (Weekend)\n", day);
        break;
    default:
        printf("→ Invalid input\n");
    }

    return 0;
}