#include<stdio.h>

void palindromecheck();
int digi();

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    palindromecheck(n);

    return 0;
}

void palindromecheck(int n)
{
    int num = n;
    int len = digi(n);
    int rev=0, r;
    while(n!=0)
    {
        r = n%10;
        rev = rev*10 + r;
        n /= 10;
    }
    
    if(num == rev)
    {
        printf("%d is a palindrome number.", num);
    }
    else
    {
        printf("%d is NOT a palindrome number.", num);
    }
}

int digi(int a)
{
    int count=0;
    while (a>0)
    {
        a = a/10;
        count++;
    }
    return count;
}