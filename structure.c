#include <stdio.h>

struct Employee
{
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main()
{
    struct Employee employees[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter details for Employee %d:\n", i + 1);

        printf("Employee Number: ");
        scanf("%d", &employees[i].empno);

        printf("Age: ");
        scanf("%d", &employees[i].age);

        printf("Employee Name: ");
        scanf(" ");
        scanf("%s", &employees[i].empname);

        printf("Address: ");
        scanf("%s", &employees[i].address);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Details of Employee %d:\n", i + 1);

        printf("Employee Number: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Address: %s\n", employees[i].address);
        printf("Age: %d\n", employees[i].age);

        printf("\n");
    }

    return 0;
}
