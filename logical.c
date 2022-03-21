#include <stdio.h>  
int main ()  
{ 
int x, y, z;
printf("siddhant\n");  
printf (" Enter the first number: ");  
scanf ("%d", &x);  
printf (" Enter the second number: ");  
scanf ("%d", &y);  
printf (" Enter the third number: ");  
scanf ("%d", &z);  

if ( x >= y && x >= z )  
{  
printf (" %d is the largest number of all. ", x);  
}  
else if ( y >= x && y >= z)  
{  
printf (" %d is the largest number of all. ", y);  
}  
else  
{  
    printf ( " %d is the largest number of all. ", z);  
}  
return 0;  
}  