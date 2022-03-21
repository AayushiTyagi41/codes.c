#include <stdio.h>
#include<string.h>
 
int main()
{
    char a[20], c;
    printf("siddhant\n");

    puts("enter the string");
    gets(a);
    c = *a;
    strrev(a);
    if (c == *a)
    {
        printf("%s is palindrome.",a);
    }
    else{
        printf("%s is not palindrome.",a);
    }
    
    return 0;
}
