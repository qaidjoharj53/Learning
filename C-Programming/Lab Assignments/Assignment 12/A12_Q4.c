#include<stdio.h>
int main()
{
    int n,i,a=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        a*=i;
    }
    printf("Factorial of %d is %d",n,a);
    return 0;
}