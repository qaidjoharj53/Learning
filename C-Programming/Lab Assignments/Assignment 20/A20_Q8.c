#include<stdio.h>
int main()
{
    struct Student
    {
        int id;
        char name[20];
        int rollno;
        int mobno;
    }s[20];

    for(int i=0; i<20; i++)
    {
        printf("STUDENT %d :-\n",i+1);
        printf("Enter ID : ");
        scanf("%d", &s[i].id);
        printf("Enter Name : ");
        scanf("%s", &s[i].name);
        printf("Enter Roll No. : ");
        scanf("%d", &s[i].rollno);
        printf("Enter Mobile No. : ");
        scanf("%d", &s[i].mobno);
    }
    printf("\nData of all the Students entered :-");
    for(int i=0; i<20; i++)
    {
        printf("\n\nEMPLOYEE %d :-\nID : %d\nName : %s\nRoll No. : %d\nMobile No. : %d", i+1, s[i].id, s[i].name, s[i].rollno, s[i].mobno);
    }

    return 0;
}