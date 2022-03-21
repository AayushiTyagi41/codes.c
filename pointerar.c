#include <stdio.h>
int main( )
{
   int *p,**q;
   int val[7] = { 11, 22, 33, 44, 55, 66, 77 } ;
   p = &val[0];
   q = &p;
   printf("siddhant\n");
   for ( int i = 0 ; i<7 ; i++ )
   {
      printf("val[%d]: value is %d \n", i, **q);
      p++;
   }
   return 0;
}