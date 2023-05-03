#include<stdio.h>

int digicount(int a)
{
    int count=0;
    while (a>0)
    {
        a = a/10;
        count++;
    }
    return count;
}

int expo(int a, int digit)
{
    int res=1;
    for(int i=0; i<digit; i++)
    {
        res*=a;
    }
    return res;
}

void Armstrongcheck(int num)
{
    int len = digicount(num), sum=0, n=num;
    int a[len];
    for(int i=0; i<len; i++)
    {
        a[i] = n%10;
        n=n/10;
        a[i] = expo(a[i],len);
        sum+=a[i];
    }
    
    if(num==sum)
    {
        printf("%d is an armstrong number.", num);
    }
    else
    {
        printf("%d is not an armstrong number.", num);
    }
}


int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    Armstrongcheck(n);    
    return 0;
}
