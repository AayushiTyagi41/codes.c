#include <stdio.h>
struct student
{
    int rollno, tot;
    char name[25];
    int mark[5];
};
void main()
{
    struct student s[5];
    int i, n, j;
    float avg;

    printf("Enter the number of students:");
    scanf("%d", &n);
    printf("\t*Students Records*\n");

    for (i = 0; i < n; i++)
    {
        printf("\nEnter Student Roll Number: ");
        scanf("%d", &s[i].rollno);
        printf("\nEnter Student name: ");
        scanf("%s", s[i].name);
        printf("\nEnter Student 3 subject's marks: ");
        for (j = 0; j < 3; j++)
            scanf("%d", &s[i].mark[j]);
    }

    for (i = 0; i < n; i++)
    {
        s[i].tot = 0;
        for (j = 0; j < 3; j++)
            s[i].tot = s[i].tot + s[i].mark[j];
            avg=s[i].tot/3;
    }

    for (i = 0; i < n; i++)
    {
        printf("\t*Students Records*\n");
        printf("\n==================================\n");
        printf("\nStudent's Roll no. – %d", s[i].rollno);
        printf("\nStudent's Name – %s", s[i].name);
        printf("\nStudent's Total Marks – %d", s[i].tot);
        print("%f",avg);
    }
}