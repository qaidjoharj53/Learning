#include<stdio.h> 
void Nnum();
int main() 
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    Nnum(n);
    return 0;
}

void Nnum(int n)
{
    for(int i=1;i<=n+n;i+=2)
    {
        printf("%d  ",i);
    }
}