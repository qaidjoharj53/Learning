#include<stdio.h>
void fibo();
int main()
{
    int n;
    printf("How many terms do you want to print? : ");
    scanf("%d", &n);
    fibo(n);
    return 0;
}

void fibo(int n)
{
    int a=0, b=1, c;
    if(n==1){printf("%d",a);}
    else if(n==2){printf("%d\n%d",a,b);}
    else
    {   
        printf("%d\n%d\n",a,b);
        c = a+b;
        printf("%d\n",c);
        for(int i=1; i<=n-3; i++)
        {
            a=b; b=c; c=a+b;
            printf("%d\n",c);
        }
    }
}