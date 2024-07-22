#include<stdio.h> 
int Combination();
int Facto();
int main() 
{
    int n,r;
    printf("Enter the number of objects : ");
    scanf("%d",&n);
    printf("Enter the number of objects to select : ");
    scanf("%d",&r);
    int c = Combination(n,r);
    printf("%d",c);
    return 0;
}

int Combination(int n, int r)
{
    int c;
    c = Facto(n) / (Facto(n-r)*Facto(r));
    return c;
}

int Facto(int n)
{
    int a=1;
    for(int i=1;i<=n;i++)
    {
        a = a*i;
    }
    return a;
}