#include<stdio.h>

int main()
{
    int a,b,c,ch;
    printf("siddhant\n");
    printf("Enter the values of a&b:");
    scanf("%d%d",&a,&b);
    printf("Airthmetic operations");
    printf("\n.....1.Addition.....");
    printf("\n.....2.Subtraction.....");
    printf("\n.....3.Multiplication.....");
    printf("\n.....4.Division.....");
    printf("\n.....5.Modulas.....");
    printf("\n.....6.Average.....");
    printf("\nEnter your choice:");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        c = a + b;
        printf("%d",c);
        break;

        case 2:
        c = a - b;
        printf("%d",c);
        break;

        case 3:
        c = a*b;
        printf("%d",c);
        break;

        case 4:
        c = a/b;
        printf("%d",c);
        break;

        case 5:
        c = a%b;
        printf("%d",c);
        break;

        case 6:
        c = (a+b)/2;
        printf("%d",c);
        break;


        default:
        printf("\nWrong Input");

    }
    return 0;
    }