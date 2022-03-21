#include <stdio.h>

int main()
{

    int no1, no2, *ptr1, *ptr2, result;

    printf("siddhant\n");
    printf("Enter no1:");
    scanf("%d", &no1);

    printf("\nEnter no2:");
    scanf("%d", &no2);

    ptr1 = &no1;
    ptr2 = &no2;
    result = *ptr1 + *ptr2;

    printf("\n Addition=%d", result);
    result = *ptr1 - *ptr2;
    printf("\n Subtraction=%d", result);
    result = *ptr1 * *ptr2;
    printf("\n Multiplication=%d", result);
    result = *ptr1 / (*ptr2);
    printf("\n Division=%d", result);
    
    return 0;
}