#include<stdio.h>
void primeno();

int main()
{
    int n;
    printf("How many Prime Nos. do you want to print? : ");
    scanf("%d", &n);
    printf("First %d Prime Numbers are : \n",n);
    primeno(n);
    return 0;
}

void primeno(int n)
{
    int j=3, pno=2;
    
    if(n>=1)
    {
        printf("%d\n", pno);
    }
    
    for(int i=0; i<n-1; i++)
    {
        for(; j<n*n; j++)
        {
            for(int k=2; k<j; k++)
            {
                if(j%k!=0)
                {
                    pno = j;
                }
                else
                {
                    pno = 0;
                    break;
                }
            }
            if(pno>0)
            {
                break;
            }
        }
        printf("%d\n",pno);
        j++;
    }
}