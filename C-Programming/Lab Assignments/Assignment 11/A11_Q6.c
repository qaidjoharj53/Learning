#include<stdio.h>
int main()
{   
    int n,a,b=1;
    printf("Enter a number to find factorial of  : ");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        b*=a;
    }
    printf("Factorial of %d is : %d",n,b);
    return 0;
}