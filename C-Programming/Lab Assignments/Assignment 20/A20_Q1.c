#include<stdio.h>
#include <string.h>
int main()
{
    struct Employee
    {
        int id;
        char name[20];
        int salary;
    }s1,s2,s3;

    s1.id = 101;
    strcpy(s1.name, "Ram");
    s1.salary = 5000;
    s2.id = 102;
    strcpy(s2.name, "Raj");
    s2.salary = 10000;
    s3.id = 103;
    strcpy(s3.name, "Rahul");
    s3.salary = 16000;

    printf("\nData of 3 Employees entered :-");
    printf("\nEMPLOYEE 1 :-\nID : %d\nName : %s\nSalary : %d", s1.id, s1.name, s1.salary);
    printf("\n\nEMPLOYEE 2 :-\nID : %d\nName : %s\nSalary : %d", s2.id, s2.name, s2.salary);
    printf("\n\nEMPLOYEE 3 :-\nID : %d\nName : %s\nSalary : %d", s3.id, s3.name, s3.salary);

    return 0;
}