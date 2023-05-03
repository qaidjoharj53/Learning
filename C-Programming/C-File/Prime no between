#include<stdio.h>
void primebw();

int main()
{
    int a,b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("Prime numbers between %d and %d are :\n",a,b);
    primebw(a,b);
    return 0;
}

void primebw(int n1, int n)
{
    int pno=0;
    if(n1==0 || n1==1)
    {
        printf("2\n");
    }
    if(n>2)
    {
        for(int i=n1+1; i<n; i++)
        {
            for(int j=2; j<i; j++)
            {
                if(i%j!=0)
                {
                    pno = i;
                }
                else
                {
                    pno = 0;
                    break;
                }
            }

            if(pno>0)
            {
                printf("%d\n",pno);
            }
        }
    }
}