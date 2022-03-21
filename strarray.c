#include<stdio.h>
#include<string.h>
#define MAX 2
#define SUBJECTS 2

struct student
{
    char name[20];
    int roll_no;
    float marks[SUBJECTS];
};

int main()
{
    struct student arr_student[MAX];
    int i, j;
    float sum = 0;
    printf("siddhant\n");

    for(i = 0; i < MAX; i++ )
    {
        printf("\nEnter details of student %d\n\n", i+1);

        printf("Enter name: ");
        scanf("%s", arr_student[i].name);

        printf("Enter roll no: ");
        scanf("%d", &arr_student[i].roll_no);

        for(j = 0; j < SUBJECTS; j++)
        {
            printf("Enter marks: ");
            scanf("%f", &arr_student[i].marks[j]);
        }
    }

    printf("\n");

    printf("Name\tRoll no\tAverage\n\n");

    for(i = 0; i < MAX; i++ )
    {
        sum = 0;

        for(j = 0; j < SUBJECTS; j++)
        {
            sum += arr_student[i].marks[j];
        }
        printf("%s\t%d\t%.2f\n",
             arr_student[i].name, arr_student[i].roll_no, sum/SUBJECTS);
    }

    // signal to operating system program ran fine
    return 0;
}