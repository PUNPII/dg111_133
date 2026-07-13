#include <stdio.h>

int main()
{
    int hours, minutes, seconds;

    printf("Input: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = seconds % 60;

    printf("Output: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}