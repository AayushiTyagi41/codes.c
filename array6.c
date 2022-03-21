#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    char s[15],f;
    int c=0,i;
    printf("siddhant\n");
    puts("Enter the string");
    gets(s);
    puts("Enter the character to find:");
    f = getchar();
    for(i=1;i<=15;i++)
    {
        if(s[i]==f)
        c++;
    }
    printf("The character %c in a string %s occurs %d times",f,s,c);
}