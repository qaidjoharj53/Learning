#include<stdio.h>
void fibo();
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    fibo(n);
    return 0;
}

void fibo(int n)
{
    int a=0, b=1, c=a+b;
    if(n==0 || n==1)
    {
        printf("The given number is present in the fibonacci series.");
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            a=b; b=c; c=a+b;
            if(c==n)
            {
                printf("The given number is present in the fibonacci series.");
                break;
            }
        }
        if(c!=n)
        {
            printf("The given number is not present in the fibonacci series.");
        }
    }
}