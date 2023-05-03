#include<stdio.h>
int main()
{
    struct Student
    {
        int id;
        char name[20];
        int rollno;
        int mobno;
    }s1,s2,s3,s4;
    
    printf("STUDENT 1 :-\n");
    printf("Enter ID : ");
    scanf("%d", &s1.id);
    printf("Enter Name : ");
    scanf("%s", &s1.name);
    printf("Enter Roll No. : ");
    scanf("%d", &s1.rollno);
    printf("Enter Mobile No. : ");
    scanf("%d", &s1.mobno);

    printf("\nSTUDENT 2 :-\n");
    printf("Enter ID : ");
    scanf("%d", &s2.id);
    printf("Enter Name : ");
    scanf("%s", &s2.name);
    printf("Enter Roll No. : ");
    scanf("%d", &s2.rollno);
    printf("Enter Mobile No. : ");
    scanf("%d", &s2.mobno);

    printf("\nSTUDENT 3 :-\n");
    printf("Enter ID : ");
    scanf("%d", &s3.id);
    printf("Enter Name : ");
    scanf("%s", &s3.name);
    printf("Enter Roll No. : ");
    scanf("%d", &s3.rollno);
    printf("Enter Mobile No. : ");
    scanf("%d", &s3.mobno);

    printf("\nSTUDENT 4 :-\n");
    printf("Enter ID : ");
    scanf("%d", &s4.id);
    printf("Enter Name : ");
    scanf("%s", &s4.name);
    printf("Enter Roll No. : ");
    scanf("%d", &s4.rollno);
    printf("Enter Mobile No. : ");
    scanf("%d", &s4.mobno);

    printf("\nData of 3 Students entered :-");
    printf("\nEMPLOYEE 1 :-\nID : %d\nName : %s\nRoll No. : %d\nMobile No. : %d", s1.id, s1.name, s1.rollno, s1.mobno);
    printf("\n\nEMPLOYEE 2 :-\nID : %d\nName : %s\nRoll No. : %d\nMobile No. : %d", s2.id, s2.name, s2.rollno, s2.mobno);
    printf("\n\nEMPLOYEE 3 :-\nID : %d\nName : %s\nRoll No. : %d\nMobile No. : %d", s3.id, s3.name, s3.rollno, s3.mobno);
    printf("\n\nEMPLOYEE 3 :-\nID : %d\nName : %s\nRoll No. : %d\nMobile No. : %d", s4.id, s4.name, s4.rollno, s4.mobno);

    return 0;
}