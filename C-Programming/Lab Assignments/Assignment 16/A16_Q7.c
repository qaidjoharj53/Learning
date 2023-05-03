#include<stdio.h>
void digitcount();
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    digitcount(num);
    return 0;
}

void digitcount(int n)
{
    int count=0;
    while(0<=n)
    {
        n = n/10;
        count++;
        if(n==0){ break;}
    }
    printf("There are %d digit(s) in the given number.", count);
}