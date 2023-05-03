#include<stdio.h>
int main()
{
    int val;
    printf("Enter an integer : ");
    scanf("%d",&val);
        if(val>0)
        {
            printf("This is a positive integer.");
        }
        else if(val<0)
        {
            printf("This is a negative integer.");
        }
        else if(val==0)
        {
            printf("The given integer is Zero.");
        }
        else
        {
            printf("Wrong Input!!");
        }
    return 0;
}