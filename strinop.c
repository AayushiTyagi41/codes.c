#include <stdio.h>
#include <string.h>

int main()
{
    int a, b, choice;
    char st1[20] = "Hello ", st2[20] = "World";
    printf("siddhant\n");
    printf("Pick one out of the following\n");
    printf("1) Length of string\n");
    printf("2) Concatinate 2 strings\n");
    printf("3) Copy one string to another\n");
    printf("4) Compare two strings\n");
    printf("\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        a = strlen(st1);
        b = strlen(st2);
        printf("Length of string1 = %d, Length of string2 = %d", a, b);
        break;

    case 2:
        strcat(st1, st2);
        printf("string1 = %s", st1);
        break;

    case 3:
        printf("(before) string1 = %s", st1);
        strcpy(st1, st2);
        printf("(after) string1 = %s", st1);
        break;

    case 4:
        printf("Comparison of two strings = %d", strcmp(st1, st2));
        break;
    }

    return 0;
}