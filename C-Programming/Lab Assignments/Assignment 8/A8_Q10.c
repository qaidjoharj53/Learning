#include<stdio.h>
int main()
{
    int weekno;
    printf("Enter week number(1-7) : ");
    scanf("%d",&weekno);
        if(weekno==1)
        {
            printf("\nDay of week is Monday.");
        }
        else if(weekno==2)
        {
            printf("\nDay of week is Tuesday.");
        }
        else if(weekno==3)
        {
            printf("\nDay of week is Wednesday.");
        }
        else if(weekno==4)
        {
            printf("\nDay of week is Thursday.");
        }
        else if(weekno==5)
        {
            printf("\nDay of week is Friday.");
        }
        else if(weekno==6)
        {
            printf("\nDay of week is Saturday.");
        }
        else if(weekno==7)
        {
            printf("\nDay of week is Sunday.");
        }
        else
        {
            printf("Wrong Input!!\nPlease enter a week number from 1-7 only.");
        }
    
    return 0;
}