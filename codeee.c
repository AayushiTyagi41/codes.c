#include <stdio.h>
#include <string.h>
 
int main()
{
    char a[20], c;

    printf("enter the string");
    gets(a);
    c = *a;
    strrev(a);
    if (c == *a)
    {
        printf("Given string is palindrome.");
    }
    else{
        printf("Given string is not palindrome.");
    }
    
    return 0;
}