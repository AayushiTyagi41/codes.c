#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("siddhant\n");
    printf("Enter a number\n");
    scanf("%d",&x);
    y = x++;
    printf("Post Increment of 1 in x is %d\n",x);
    y = x--;
    printf("Post Decrement 0f 1 in x is %d\n",x);
    y = ++x;
    printf("Pre Increment of 1 in x is %d\n",x);
    y = --x;
    printf("Pre Decrement 0f 1 in x is %d\n",x);
    return 0;
    
}