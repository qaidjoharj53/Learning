#include<stdio.h>
int main()
{
    struct student{
        int rollno;
        char name[20];
        float marks; }s[5];
    
    for(int i=0; i<5; i++)
    {
        printf("Enter Roll no. : ");
        scanf("%d", &s[i].rollno);
        printf("Enter Name : ");
        scanf("%s", &s[i].name);
        printf("Enter Marks : ");
        scanf("%f", &s[i].marks);
    }
    puts("Records:-");
    for(int i=0; i<5; i++)
    {
        printf("\nRoll No. : %d\nName : %s\nMarks : %.2f", s[i].rollno, s[i].name, s[i].marks);
    }
    return 0;
}