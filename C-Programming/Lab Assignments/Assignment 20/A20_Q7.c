#include<stdio.h>
int main()
{
    struct Employee
    {
        int id;
        char name[20];
        int salary;
    }s[20];

    for(int i=0; i<20; i++)
    {
        printf("\nEMPLOYEE %d :-\n", i+1);
        printf("Enter ID : ");
        scanf("%d", &s[i].id);
        printf("Enter Name : ");
        scanf("%s", &s[i].name);
        printf("Enter Salary : ");
        scanf("%d", &s[i].salary);
    }
    printf("\nData of all the Employees entered :-");
    for(int i=0; i<20; i++)
    {
        printf("\n\nEMPLOYEE %d :-\nID : %d\nName : %s\nSalary : ₹ %d/-", i+1, s[i].id, s[i].name, s[i].salary);
    }

    return 0;
}