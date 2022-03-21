#include <stdio.h>
void main()
{
    int arr1[100];
    int i, mx, mn, n;
	   printf("siddhant\n");
       printf("Enter the numbers to store in array :");
       scanf("%d",&n);
   
       printf("Enter %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - ");
	      scanf("%d",&arr1[i]);
	    }
    mx = arr1[0];
    mn = arr1[0];
    for(i=1; i<n; i++)
    {
        if(arr1[i]>mx)
        {
            mx = arr1[i];
        }
        if(arr1[i]<mn)
        {
            mn = arr1[i];
        }
    }
    printf("Maximum element is : %d\n", mx);
    printf("Minimum element is : %d\n\n", mn);
}