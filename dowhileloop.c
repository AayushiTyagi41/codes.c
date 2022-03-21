#include<stdio.h>
int main()
{
    printf("siddhant\n");
    int a=0, num;
    printf("enter the value of num \n");
    scanf ("%d", &num);
    do
    {
        printf("%d\n", a+1);
        a++;
        } while (a < num);

    return 0;
}