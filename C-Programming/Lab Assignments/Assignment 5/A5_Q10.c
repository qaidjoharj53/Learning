#include<stdio.h>
int main()
{
    int Phy, Chem, Math, Eng, CS, Perc, TMarks;
    printf("Marks obtained in Physics : ");
    scanf("%d", &Phy);
    printf("Marks obtained in Chemistry : ");
    scanf("%d", &Chem);
    printf("Marks obtained in Mathematics : ");
    scanf("%d", &Math);
    printf("Marks obtained in English : ");
    scanf("%d", &Eng);
    printf("Marks obtained in Computer Science : ");
    scanf("%d", &CS);
    TMarks = Phy+Chem+Math+Eng+CS;
    Perc = TMarks*100/500;
    printf("Percentage obtained : %d",Perc);
    return 0;
}