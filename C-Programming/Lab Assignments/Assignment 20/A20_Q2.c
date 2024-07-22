#include<stdio.h>
int main()
{
    struct Employee
    {
        int id;
        char name[20];
        int salary;
    }s1,s2,s3;

    printf("EMPLOYEE 1 :-\n");
    printf("Enter ID : ");
    scanf("%d", &s1.id);
    printf("Enter Name : ");
    scanf("%s", &s1.name);
    printf("Enter Salary : ");
    scanf("%d", &s1.salary);

    printf("\nEMPLOYEE 2 :-\n");
    printf("Enter ID : ");
    scanf("%d", &s2.id);
    printf("Enter Name : ");
    scanf("%s", &s2.name);
    printf("Enter Salary : ");
    scanf("%d", &s2.salary);

    printf("\nEMPLOYEE 3 :-\n");
    printf("Enter ID : ");
    scanf("%d", &s3.id);
    printf("Enter Name : ");
    scanf("%s", &s3.name);
    printf("Enter Salary : ");
    scanf("%d", &s3.salary);

    printf("\nData of 3 Employees entered :-");
    printf("\nEMPLOYEE 1 :-\nID : %d\nName : %s\nSalary : %d", s1.id, s1.name, s1.salary);
    printf("\n\nEMPLOYEE 2 :-\nID : %d\nName : %s\nSalary : %d", s2.id, s2.name, s2.salary);
    printf("\n\nEMPLOYEE 3 :-\nID : %d\nName : %s\nSalary : %d", s3.id, s3.name, s3.salary);

    return 0;
}