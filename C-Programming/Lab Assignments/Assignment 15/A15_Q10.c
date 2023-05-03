#include<stdio.h>
void PrimeFac();
int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d", &num);
    PrimeFac(num);
    return 0;
}

void PrimeFac(int n)
{
    for (int i=2; i<=n; i++)
    {
        while(n%i==0)
        {
            if(n==i)
            {
            printf("%d",i);
            }
            else
            {
                printf("%d, ",i);
            }
            n=n/i;
        }
    }
}