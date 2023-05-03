#include<stdio.h> 
int eo();
int main() 
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d",eo(n));
    return 0;
}

int eo(int n)
{
    if(n%2==0)
    { return 1; }
    else{ return 0; }
}