#include <stdio.h>  
   
int main()
{  
    int i, num; 

    printf("siddhant\n");
    printf("Enter a Number\n");  
    scanf("%d", &num);  
   
    printf("Printing Numbers form %d to 1\n", num);  

    i = num;
    while(i > 0)
    {  
        printf("%d \n", i);  
        i--;
    }
     
    return 0;  
}