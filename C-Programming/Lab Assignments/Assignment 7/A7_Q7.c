#include<stdio.h>
int main()
{
    int val;
    printf("Enter any number : ");
    scanf("%d",&val);
        if(val%5==0)
        {
            printf("The value is divisible by 5");
        }
        else if(val%5!=0)
        {
            printf("The value is not divisible by 5.");
        }
        else
        {
            printf("Wrong Input!!");
        }
    return 0;
}