#include<stdio.h>
void sumofn();

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    sumofn(n);
    return 0;
}

void sumofn(int n)
{
    int a=0;
    for(int i=1; i<=n+n; i++)
    {
        if(i%2!=0)
        {
            a+=i;
        }
    }
    printf("Sum of first %d numbers is : %d",n,a);
}