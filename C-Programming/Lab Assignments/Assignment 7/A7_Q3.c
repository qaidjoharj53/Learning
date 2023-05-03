#include<stdio.h>
int main()
{
    int val;
    printf("Enter a number between 1-100 : ");
    scanf("%d",&val);
        if(val>=50 && val<=100)
        {
            printf("SUCCESS");
        }
        else if(val>0 && val<50)
        {
            printf("FAIL");
        }
        else
        {
            printf("Wrong Input!!");
        }
    return 0;
}