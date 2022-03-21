#include<stdio.h>

void main()
{

    int ar[]={5,6,4};
    char arr[]={5,6,4};

    int*ptr = ar;
    printf("siddhant\n");

    printf("Address of a %d\n",&ar[0]);
    printf("Address of a1 %d\n",&ar[1]);
    printf("Address of a2 %d\n",&ar[2]);
    printf("\n");

    printf("Address of b %d\n",&arr[0]);
    printf("Address of b1 %d\n",&arr[1]);
    printf("Address of b2 %d\n",&arr[2]);
}