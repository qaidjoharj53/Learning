#include<stdio.h>
int main()
{
    char name[50], dob[11], no[13];
    printf("Enter your Name : ");
    scanf("%s", &name);
    printf("Enter your Date of Birth : ");
    scanf("%s", &dob);
    printf("Enter your mob. number : ");
    scanf("%s", &no);

// Name: Qaidjohar ; DOB: 16-03-2004 ; Mob. No.: 1234567890

    printf("\n|    N A M E    |    D O B    |  Mob. Number  |\n");
    printf("|   %s   |  %s |   %s  |", name, dob, no);

    return 0;
}