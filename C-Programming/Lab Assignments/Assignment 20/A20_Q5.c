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
    }s1,s2,s3,s4,s5;
    
    printf("Enter Student Details :-\n");
    printf("\nStudent 1:-");
    printf("\nEnter ID : ");
    scanf("%d", &s1.id);
    printf("Enter Name : ");
    scanf("%s", &s1.name);
    printf("Marks obtained in Physics : ");
    scanf("%d", &s1.phymarks);
    printf("Marks obtained in Chemistry : ");
    scanf("%d", &s1.chemmarks);
    printf("Marks obtained in Mathematics : ");
    scanf("%d", &s1.mathmarks);

    printf("\nStudent 2:-");
    printf("\nEnter ID : ");
    scanf("%d", &s2.id);
    printf("Enter Name : ");
    scanf("%s", &s2.name);
    printf("Marks obtained in Physics : ");
    scanf("%d", &s2.phymarks);
    printf("Marks obtained in Chemistry : ");
    scanf("%d", &s2.chemmarks);
    printf("Marks obtained in Mathematics : ");
    scanf("%d", &s2.mathmarks);

    printf("\nStudent 3:-");
    printf("\nEnter ID : ");
    scanf("%d", &s3.id);
    printf("Enter Name : ");
    scanf("%s", &s3.name);
    printf("Marks obtained in Physics : ");
    scanf("%d", &s3.phymarks);
    printf("Marks obtained in Chemistry : ");
    scanf("%d", &s3.chemmarks);
    printf("Marks obtained in Mathematics : ");
    scanf("%d", &s3.mathmarks);

    printf("\nStudent 4:-");
    printf("\nEnter ID : ");
    scanf("%d", &s4.id);
    printf("Enter Name : ");
    scanf("%s", &s4.name);
    printf("Marks obtained in Physics : ");
    scanf("%d", &s4.phymarks);
    printf("Marks obtained in Chemistry : ");
    scanf("%d", &s4.chemmarks);
    printf("Marks obtained in Mathematics : ");
    scanf("%d", &s4.mathmarks);

    printf("\nStudent 5:-");
    printf("\nEnter ID : ");
    scanf("%d", &s5.id);
    printf("Enter Name : ");
    scanf("%s", &s5.name);
    printf("Marks obtained in Physics : ");
    scanf("%d", &s5.phymarks);
    printf("Marks obtained in Chemistry : ");
    scanf("%d", &s5.chemmarks);
    printf("Marks obtained in Mathematics : ");
    scanf("%d", &s5.mathmarks);

    printf("\n\nStudent Details :-\n");
    printf("\nStudent 1:-");
    printf("\nID : %d\nName : %d\nMarks Obtained in Physics : %d\nMarks Obtained in Chemistry : %d\nMarks Obtained in Mathematics : %d\n", s1.id, s1.name, s1.phymarks, s1.chemmarks, s1.mathmarks);
    printf("\nStudent 2:-");
    printf("\nID : %d\nName : %d\nMarks Obtained in Physics : %d\nMarks Obtained in Chemistry : %d\nMarks Obtained in Mathematics : %d\n", s2.id, s2.name, s2.phymarks, s2.chemmarks, s2.mathmarks);
    printf("\nStudent 3:-");
    printf("\nID : %d\nName : %d\nMarks Obtained in Physics : %d\nMarks Obtained in Chemistry : %d\nMarks Obtained in Mathematics : %d\n", s3.id, s3.name, s3.phymarks, s3.chemmarks, s3.mathmarks);
    printf("\nStudent 4:-");
    printf("\nID : %d\nName : %d\nMarks Obtained in Physics : %d\nMarks Obtained in Chemistry : %d\nMarks Obtained in Mathematics : %d\n", s4.id, s4.name, s4.phymarks, s4.chemmarks, s4.mathmarks);
    printf("\nStudent 5:-");
    printf("\nID : %d\nName : %d\nMarks Obtained in Physics : %d\nMarks Obtained in Chemistry : %d\nMarks Obtained in Mathematics : %d\n", s5.id, s5.name, s5.phymarks, s5.chemmarks, s5.mathmarks);

    return 0;
}