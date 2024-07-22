#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
        if(a%7==0 || a%3==0)
        {
            printf("The given number is divisible by 7 or 3.");
        }
        else
        {
            printf("The given number is not divisible by both 7 and 3.");
        }
    return 0;
}