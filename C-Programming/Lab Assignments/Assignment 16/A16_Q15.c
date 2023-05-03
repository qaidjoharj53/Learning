#include<stdio.h>
void primebw();

int main()
{
    printf("Prime number from 0-100 are : \n");
    primebw(100);
    return 0;
}

void primebw(int n)
{
    int pno=2;
    if(n==1)
    {
        printf("%d", pno);
    }
    else if(n>1)
    {
        printf("%d\n", pno);
        for(int i=3; i<n; i++)
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