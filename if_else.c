#include<stdio.h>

int main()
{
    int Age;
    printf("aayushi\n");
    printf("Enter your age:");
    scanf("%d", &Age);
    if (Age >= 18)
    {
        printf("you are eligible for voting");
        return 0;
    }
    else
    {
        printf("you are not eligible for voting");
    }
}
