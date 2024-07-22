#include<stdio.h>
void primecheck();
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    primecheck(n);
    return 0;
}

void primecheck(int n)
{
    int pno=0;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            pno++;
        }
    }
    if(pno>0)
    {
        printf("%d is not a Prime number.",n);
    }
    else
    {
        printf("%d is a Prime number.",n);
    }
}