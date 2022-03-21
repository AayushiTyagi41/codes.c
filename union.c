// wap to find the size of union and the number of byte reserved for it.
/*#include <stdio.h>

union result
{
    int marks;
    char name[30];
};
union result x;
int main()
{

    printf("%d", sizeof(x.marks));

    return 0;
}

#include <stdio.h>

int main()
{
    union result
    {
        int marks;
        char grade;
    };
    struct xy
    {
        int age;
        char name[30];
        union result r;
    } data;
    printf("%d", sizeof(r));
    printf("%d", sizeof(data.r));
    return 0;
}

//the enum keyword is used to declare enumeration
//type the programmer can create on data type and define what values the variables of these data types can hold


#include<stdio.h>

int main()
{
    enum month{jan,feb,march,april,may,june,july,august,september,october,november,december};
    printf("%d",jan);
    return 0;
}

//wap to display the name of month using enum rate datatype intialize enum data with userdefined constant

#include<stdio.h>

int main()
{
    enum month{jan,feb,march,april,may,june,july,august,september,october,november,december};
    int m;
    switch (m)
    {
    case jan:
    printf("jan");
        break;
    case feb:
    printf("feb");
        break;
    case march:
    printf("march");
        break;
    case april:
    printf("april");
        break;
    case may:
    printf("may");
        break;
    case june:
    printf("june");
        break;
    case july:
    printf("july");
        break;
    case august:
    printf("august");
        break;
    case september:
    printf("september");
        break;

    return 0;
}*/

// wap to identify the type of entered character whether it is a
// letter,digit or other symbol using enumerate datatype

#include <stdio.h>

int main()
{
    enum month
    {
        jan,
        feb,
        march,
        april,
        may,
        june,
        july,
        august,
        september,
        october,
        november,
        december
    };
    int i;
    for (i = jan; i < december; i++)
    {
        printf("%d\n", i);
    }
}