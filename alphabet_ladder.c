#include <stdio.h>
int main()
{
    int i,j,lines;
    char ch='A';
    printf("Enter the no. of lines");
    scanf("%d",&lines);
    for(i=1;i<=lines;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch++);
        }
        printf("\n");
    }
    return 0;
}