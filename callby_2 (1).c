#include <stdio.h>  
void swap(int *, int *);
int main()  
{  
    int x = 10;  
    int y = 20;
    printf("siddhant\n");
    printf("Before swapping the values in main x = %d, y = %d\n",x,y);
    swap(&x,&y);  
    printf("After swapping values in main x = %d, y = %d\n",x,y);
}  
void swap (int *a, int *b)  
{  
    int temp;   
    temp = *a;  
    *a=*b;  
    *b=temp;  
    printf("After swapping values in function a = %d, b = %d\n",*a,*b);  
}  