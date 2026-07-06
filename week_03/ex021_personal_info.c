#include <stdio.h>

int main()
{
    char name[50];
    int age;
    float gpa;
    char fav_subject[50];

    printf("=== Personal Information ===\n");

    printf("Name: ");
    scanf("%s", name);
    printf("Age: ");
    scanf("%d", &age);
    printf("GPA: ");
    scanf("%f", &gpa);
    printf("Major: ");
    scanf("%s", fav_subject);

    printf("\n=== Personal Information ===\n");
    printf("Name: %s\n", name);
    printf("Age: %d years old\n", age);
    printf("GPA: %.2f\n", gpa);
    printf("Major: %s\n", fav_subject);

    return 0;
}