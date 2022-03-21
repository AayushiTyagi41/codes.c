#include<stdio.h>
int s;
int sum(int a,int b)
{
    s=a+b;
    return s;
}
int main()
{
    extern int s;
    int a,b;
    printf("siddhant\n");
    printf("\nEnter the value of a:");
    scanf("%d",&a);
    printf("\nEnter the value of b:");
    scanf("%d",&b);
    s=sum(a,b);
    printf("Sum of a & b:%d",s);
    return 0;
}
