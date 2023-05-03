#include<stdio.h>

void TotalMarks()
{
    int Phy, Chem, Math, Eng, CS, Marks;

    printf("Marks obtained in Physics : ");
    scanf("%d", & Phy);
    printf("Marks obtained in Chemistry : ");
    scanf("%d", & Chem);
    printf("Marks obtained in Mathematics : ");
    scanf("%d", & Math);
    printf("Marks obtained in English : ");
    scanf("%d", & Eng);
    printf("Marks obtained in Computer Science : ");
    scanf("%d", & CS);
    Marks = Phy+Chem+Math+Eng+CS;

    printf("\nTotal marks obtained : %d", Marks);
}
void Percentage()
{
    int Phy, Chem, Math, Eng, CS, Marks, Perc;
    Perc = Marks*100/500;
    printf("\n\nPercentage obtained : %d %%",Perc);    
}
void AvgMarks()
{
    int Phy, Chem, Math, Eng, CS, Marks, AvgMark;
    AvgMark = Marks/5;
    printf("\n\nAverage marks obtained : %d \n\n",AvgMark);    
}

int main()
{
    int Phy, Chem, Math, Eng, CS, Marks;
    TotalMarks();
    Percentage();
    AvgMarks();
return 0;
}