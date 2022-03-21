#include <stdio.h>

struct employee
{
    int EmployeeId;
    char EmployeeName[100];
    int Age;
    char Address[100];
    char Department[100];
    int salary;
};

int main(void)
{
    struct employee emp[100];
    int n, i, key;
    printf("siddhant\n");
    printf("Enter the number of employees:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the details of employee %d:\n", i + 1);
        printf("Employee ID:\n");
        scanf("%d", &emp[i].EmployeeId);
        printf("Employee name:\n");
        scanf("%s", emp[i].EmployeeName);
        printf("Employee Age:\n");
        scanf("%d", &emp[i].Age);
        printf("Employee Address:\n");
        scanf("%s", emp[i].Address);
        printf("Employee Department:\n");
        scanf("%s", emp[i].Department);
        printf("Employee Salary:\n");
        scanf("%d", &emp[i].salary);
        printf("\n");
    }
    printf("Enter the id of employee to print the details:\n");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (emp[i].EmployeeId == key)
        {
            printf("Details of employee %d is :\n", emp[i].EmployeeId);
            printf("Name=%s\n", emp[i].EmployeeName);
            printf("Age=%d\n", emp[i].Age);
            printf("Address=%s\n", emp[i].Address);
            printf("Department=%s\n",emp[i].Department);
            printf("Salary=%d\n", emp[i].salary);
            break;
        }
    }
    return 0;
}