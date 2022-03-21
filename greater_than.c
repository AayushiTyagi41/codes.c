#include<stdio.h>

int main()
{
    int number;
    printf("siddhant\n");
    printf("To check whether the number is greater than 100 and less than 1000\n");
    printf("\nEnter the Number");
    scanf("%d",&number);
    if((number>100) && (number<1000))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}