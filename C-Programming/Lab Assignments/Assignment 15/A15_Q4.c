#include<stdio.h> 
int Nnum();
int main() 
{
    int n;
    printf("How many natural number do you want to print : ");
    scanf("%d",&n);
    Nnum(n);
    return 0;
}

int Nnum(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d  ",i);
    }
}