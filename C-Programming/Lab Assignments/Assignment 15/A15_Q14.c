#include<stdio.h>
void primenext();

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("A prime number just after %d is : ",n);
    primenext(n);
    return 0;
}

void primenext(int n)
{
    int pno=0;
    if(n==0 || n==1)
    {
        printf("2\n");
    }
    else if(n>=2)
    {
        for(int i=n+1; i<n*2; i++)
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
                break;
            }
        }
    }
}