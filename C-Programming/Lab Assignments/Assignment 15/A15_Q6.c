#include<stdio.h> 
int Facto();
int main() 
{
    int n;
    printf("Enter a number to find factorial of : ");
    scanf("%d",&n);
    int f = Facto(n);
    printf("%d",f);
    return 0;
}

int Facto(int n)
{
    int a=1;
    if(n==0){ return a;}
    else
    {
        for(int i=1;i<=n;i++)
        {
            a = a*i;
        }
        return a;
    }
}