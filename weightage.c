#include<stdio.h>
#include<math.h>

int main()
{
    int age, count = 0, x=1;
    float wt;
    printf("siddhant\n");
    printf("Enter the Data of 5 Students \n");
    printf("Age Weight\n");
    do
    {
       scanf("%d %f", &age, &wt);
       if(age<25 && wt<50)
       {
           count++;
       }
       x++; 
    }
    while(x<=5);
    printf("\nNumber of students with age <25");
    printf("and Weight <50 kgs =%d\n",count);
}