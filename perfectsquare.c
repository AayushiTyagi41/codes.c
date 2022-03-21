#include<stdio.h>
#include<math.h>

int main()
{
  int n, i, root;
  printf("siddhant\n");
  printf("Enter a number:");
  scanf("%d", & n);

  for (i = 1; i <= n ; i++)
  {

    root = sqrt(i);
    root = root * root;

    if (i == root)
    {
      printf("\ni = %d", i);
    }
  }
  return 0;
}