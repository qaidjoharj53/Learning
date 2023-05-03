#include<stdio.h>
int main()
{
    struct Birthday
    {
        int date;
        int month;
        int year;
    }s1,s2,s3,s4,s5;
    
    printf("Enter birthday detail :-");
    printf("\n\nStudent 1:-\n");
    printf("Enter date : ");
    scanf("%d", &s1.date);
    printf("Enter month : ");
    scanf("%d", &s1.month);
    printf("Enter year : ");
    scanf("%d", &s1.year);

    printf("\nStudent 2:-\n");
    printf("Enter date : ");
    scanf("%d", &s2.date);
    printf("Enter month : ");
    scanf("%d", &s2.month);
    printf("Enter year : ");
    scanf("%d", &s2.year);

    printf("\nStudent 3:-\n");
    printf("Enter date : ");
    scanf("%d", &s3.date);
    printf("Enter month : ");
    scanf("%d", &s3.month);
    printf("Enter year : ");
    scanf("%d", &s3.year);

    printf("\nStudent 4:-\n");
    printf("Enter date : ");
    scanf("%d", &s4.date);
    printf("Enter month : ");
    scanf("%d", &s4.month);
    printf("Enter year : ");
    scanf("%d", &s4.year);

    printf("\nStudent 5:-\n");
    printf("Enter date : ");
    scanf("%d", &s5.date);
    printf("Enter month : ");
    scanf("%d", &s5.month);
    printf("Enter year : ");
    scanf("%d", &s5.year);

    printf("\n\nBirth date of 1st student : %d|%d|%d", s1.date, s1.month, s1.year);
    printf("\n\nBirth date of 2nd student : %d|%d|%d", s2.date, s2.month, s2.year);
    printf("\n\nBirth date of 3rd student : %d|%d|%d", s3.date, s3.month, s3.year);
    printf("\n\nBirth date of 4th student : %d|%d|%d", s4.date, s4.month, s4.year);
    printf("\n\nBirth date of 5th student : %d|%d|%d", s5.date, s5.month, s5.year);

    return 0;
}