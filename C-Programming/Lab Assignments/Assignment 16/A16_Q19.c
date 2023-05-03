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

void Armstrong_till_1000(int num)
{
    int a[num/2];
    for(int i=0; i<num; i++)
    {
        int sum=0, n=i;
        for(int j=0; j<digicount(i); j++)
        {
            a[j] = n%10;
            n=n/10;
            a[j] = expo(a[j],digicount(i));
            sum+=a[j];
        }
        
        if(i==sum)
        {
            printf("%d\n", i);
        }
    }
}


int main()
{
    int n=1000;
    printf("Armstrong numbers till %d are : \n",n);
    Armstrong_till_1000(n);    
    return 0;
}
