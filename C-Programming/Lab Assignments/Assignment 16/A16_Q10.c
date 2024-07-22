#include<stdio.h>
void fibo();
int main()
{
    int n;
    printf("Which term do you want to print? : ");
    scanf("%d", &n);
    fibo(n);
    return 0;
}

void fibo(int n)
{
    int a=0, b=1, c;
    if(n==1){printf("%d",a);}
    else if(n==2){printf("%d",b);}
    else
    {   
        c = a+b;
        if(n==3)
        {
            printf("%d\n",c);
        }
        else if(n>3)
        {
            for(int i=1; i<=n-3; i++)
            {
                a=b; b=c; c=a+b;
            }
            printf("%d\n",c);
        }
    }
}