#include<stdio.h>

int main()
{
    int a,b,c,ch;
    printf("siddhant\n");
    printf("enter the value of a&b");
    scanf("%d %d",&a,&b);
    printf("airthematic operations");
    printf("\n 1.Addition");
    printf("\n 2.Subtraction");
    printf("\n 3.Multiplication");
    printf("\n 4.division");
    printf("\n 5.modulas");
    printf("\n Enter the choice");
    scanf("%d",&ch);

    switch(ch)
    {

    case 1:
    c=a+b;
    printf("%d",c);
    break;

    case 2:
    c=a-b;
    printf("%d",c);
    break;

    case 3:
    c=a*b;
    printf("%d",c);
    break;

    case 4:
    c=a/b;
    printf("%d",c);
    break;

    case 5:
    c=a%b;
    printf("%d",c);
    break;

    default:
    printf("\nwrong Input");

    }
    return 0;
}






