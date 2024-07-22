#include<stdio.h>
int main()
{
    struct Birthday
    {
        int date;
        int month;
        int year;
    }s[20];
    
    printf("Enter birthday detail :-");
    for(int i=0; i<20; i++)
    {
        printf("\n\nStudent %d :-\n", i+1);
        printf("Enter date : ");
        scanf("%d", &s[i].date);
        printf("Enter month : ");
        scanf("%d", &s[i].month);
        printf("Enter year : ");
        scanf("%d", &s[i].year);
    }
    for(int i=0; i<20; i++)
    {
        printf("\n\nBirth date of student %d : %d|%d|%d", i+1, s[i].date, s[i].month, s[i].year);
    }

    return 0;
}