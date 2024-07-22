#include<stdio.h>
int main()
{
    int val;
    printf("Enter an integer : ");
    scanf("%d",&val);
        if(val>0)
        {
            if(val%10==0)
            {
            printf("The given number is a positive integer and divisible by 10.");
            }
            else
            {
            printf("The given number is a positive integer but not divisible by 10.");
            }
        }
        else if(val<0)
        {
            printf("The given number is a negative integer.");
        }
        else if(val==0)
        {
            printf("The given number is Zero.");
        }
        else
        {
            printf("Wrong Input!!");
        }
    return 0;
}