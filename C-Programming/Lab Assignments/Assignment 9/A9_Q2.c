#include<stdio.h>
int main()
{
    int Phy, Chem, Math, Eng, CS, Marks;
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
    Marks = Phy+Chem+Math+Eng+CS;

        if(Phy>33 && Chem>33 && Math>33 && Eng>33 && CS>33)
        {
            printf("PASSED");
            printf("\nTotal marks obtained : %d", Marks);
        }
        else if(Phy<33 || Chem<33 || Math<33 || Eng<33 || CS<33)
        {
            printf("FAIL");
        }
        else
        {
            printf("Wrong Input!!");
        }
    return 0;
}