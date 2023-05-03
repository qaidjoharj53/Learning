#include<stdio.h>
int main()
{
    int val;
    printf("Enter any number : ");
    scanf("%d",&val);
        if(val%2==0)
        {
            if(val%3==0 && val%2==0)
            {
            printf("The given number is even and divisible by 3 & 2.");
            }
            else
            {
            printf("The given number is even but not divisible by 3 & 2.");
            }
        }

        else if(val%2!=0)
        {
            if(val%5==0)
            {
            printf("The given number is odd and divisible by 5.");
            }
            else
            {
            printf("The given number is odd but not divisible by 5.");
            }
        }

        else
        {
            printf("Wrong Input!!");
        }

    return 0;
}