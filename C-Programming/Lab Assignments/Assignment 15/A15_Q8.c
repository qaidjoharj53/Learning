#include<stdio.h> 
int Permutation();
int Facto();
int main() 
{
    int n,r;
    printf("Enter the number of objects : ");
    scanf("%d",&n);
    printf("Enter the number of objects to select : ");
    scanf("%d",&r);
    int c = Permutation(n,r);
    printf("%d",c);
    return 0;
}

int Permutation(int n, int r)
{
    int c;
    c = Facto(n) / Facto(n-r);
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