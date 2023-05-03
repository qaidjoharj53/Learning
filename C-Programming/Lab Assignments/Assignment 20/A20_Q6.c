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

    printf("\nStudent 1:-");
    printf("Percentage Obtained : %d%", (s1.chemmarks+s1.mathmarks+s1.phymarks)/3);
    printf("\nStudent 2:-");
    printf("Percentage Obtained : %d%", (s2.chemmarks+s2.mathmarks+s2.phymarks)/3);
    printf("\nStudent 3:-");
    printf("Percentage Obtained : %d%", (s3.chemmarks+s3.mathmarks+s3.phymarks)/3);
    printf("\nStudent 4:-");
    printf("Percentage Obtained : %d%", (s4.chemmarks+s4.mathmarks+s4.phymarks)/3);
    printf("\nStudent 5:-");
    printf("Percentage Obtained : %d%", (s5.chemmarks+s5.mathmarks+s5.phymarks)/3);

    return 0;
}