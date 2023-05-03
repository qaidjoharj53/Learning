#include<stdio.h>
void HCF();
int main()
{
    int n1, n2;
    printf("Enter first integer : ");
    scanf("%d", &n1);
    printf("Enter second integer : ");
    scanf("%d", &n2);
    HCF(n1, n2);
    return 0;
}

void HCF(int n1, int n2)
{
    int a, max;
    max = n1>n2 ? n1 : n2 ;
    for (int i=1; i<=max ; i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            a = i;
        }
    }
    if(a==1)
    {
        printf("%d and %d are co-prime numbers.",n1,n2);
    }
    else
    {
        printf("%d and %d are not co-prime numbers.",n1,n2);
    }
}