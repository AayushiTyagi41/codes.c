#include<stdio.h>
#include<stdlib.h>

void main()
{
    int x[3][3]={1,2,3,4,5,6,7,8,9};
    int c,r;
    printf("siddhant\n");
    printf("print address");
    printf("\n  \t  col-0 \tc0l-1 \t col-2");
    printf("\n row 0\t");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
         printf("%d [%u]",x[r][c],&x[r][c]);
         printf("\n row %d\t",r+1);
    }
printf("\r");
}
