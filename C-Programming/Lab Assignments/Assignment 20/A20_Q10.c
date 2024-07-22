#include<stdio.h>
int main()
{
    struct Student_Marks
    {
        int id;
        char name[20];
        int phymarks;
        int chemmarks;
        int mathmarks;
    }s[20];
    
    printf("Enter Student Details :-\n");
    for(int i=0; i<20; i++)
    {
        printf("\nStudent %d:-", i+1);
        printf("\nEnter ID : ");
        scanf("%d", &s[i].id);
        printf("Enter Name : ");
        scanf("%s", &s[i].name);
        printf("Marks obtained in Physics : ");
        scanf("%d", &s[i].phymarks);
        printf("Marks obtained in Chemistry : ");
        scanf("%d", &s[i].chemmarks);
        printf("Marks obtained in Mathematics : ");
        scanf("%d", &s[i].mathmarks);
    }
    printf("\n\nStudent Details :-\n");
    for(int i=0; i<20; i++)
    {
        printf("\nStudent %d:-",i+1);
        printf("\nID : %d\nName : %s\nMarks Obtained in Physics : %d\nMarks Obtained in Chemistry : %d\nMarks Obtained in Mathematics : %d\n", s[i].id, s[i].name, s[i].phymarks, s[i].chemmarks, s[i].mathmarks);
    }

    return 0;
}