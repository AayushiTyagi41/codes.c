#include<stdio.h>
int main()
{
        int i,size;
        printf("siddhant\n");
        printf("Enter array length:");
        scanf("%d",&size);

        int arr[size];

        printf("Enter the array elements : ");
        for(i=0; i<size; i++)
        {
                scanf("%d", &arr[i]);
        }
        printf("\nArray elements with their addresses :: \n");
        for(i=0; i<size; i++)
        {
                printf("Value of arr[%d] = %d\t", i, arr[i]);
                printf("Address of arr[%d] = %p\n", i, &arr[i] );
        }
        return 0;
}