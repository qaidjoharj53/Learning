#include<stdio.h>
void revnum();
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    revnum(n);
    return 0;
}

void revnum(int n)
{
    int rev;
    printf("Reversed number is : ");
    for(int i=0; i<=n;)
    {
        rev = n%10;
        printf("%d",rev);
        n = n/10;
        if(n==0){ break;}
    }
}