#include<stdio.h>
#include<stdlib.h>

int x,sum;
void main(int);
void main(int x)
{  
    sum=sum+x;
    printf("\nx=%d sum=%d",x,sum);
    if(x==5)
    exit(0);
    main(++x);
}