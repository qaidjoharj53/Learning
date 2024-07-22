#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
        if(a%3==0 && a%2==0)
        {
            printf("The given number is divisible by 3 and 2.");
        }
        else
        {
            printf("The given number is not divisible by 3 and 2.");
        }
    return 0;
}
