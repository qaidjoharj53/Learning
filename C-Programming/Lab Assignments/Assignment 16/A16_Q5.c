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
    int sq;
    int a=0;
    for(int i=1; i<=n; i++)
    {
        a = a+i*i*i;
    }
    printf("Sum of first %d numbers is : %d",n,a);
}