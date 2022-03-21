#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, count, rem, sum, choice, nu, m;
    long int n, a, b, c, d, e, f, i;
    printf("siddhant\n");
    printf("press 1 for armstrong  number");
    printf("\npress2 for prime numbers");
    printf("\npress 3 for reverse of an integer\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the number to which you want to find armstrong number:");
        scanf("%d", &nu);
        while (count <= nu)
        {
            num = count;
            sum = 0;
            while (num)
            {
                rem = num % 10;
                sum = sum + (rem * rem * rem);
                num = num / 10;
            }
            if (count == sum)
            {
                printf("%d is an armstrong number\n", count);
            }
            count++;
        }
        break;
    case 2:
        printf("Enter the number till which you want prime numbers\n");
        scanf("%d", &nu);

        printf("Prime numbers are:-\n");
        for (i = 2; i <= nu; i++)
        {
            int c = 0;
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    c++;
                }
            }

            if (c == 2)
            {
                printf("%d ", i);
            }
        }
        break;
    case 3:
        printf("\nEnter a five digit number: ");
        scanf("%li", &n);
        b = (n % 10);
        c = (n / 10) % 10;
        d = (n / 100) % 10;
        e = (n / 1000) % 10;
        f = (n / 10000) % 10;
        a = (b * 10000) + (c * 1000) + (d * 100) + (e * 10) + (f);
        printf("\nThe number obtained by reversing the number: %li", a);
    }
    return 0;
}