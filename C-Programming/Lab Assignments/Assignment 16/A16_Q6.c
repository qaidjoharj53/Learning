#include<stdio.h> 
void Facto();
int main() 
{
    int n;
    printf("Enter a number to find factorial of : ");
    scanf("%d",&n);
    Facto(n);
    return 0;
}

void Facto(int n)
{
    int a=1;
    if(n==0){ printf("%d",a);}
    else
    {
        for(int i=1;i<=n;i++)
        {
            a = a*i;
        }
        
        printf("Factorial of the given number is : %d",a);
    }
}