#include<stdio.h>
int main()
{
    int n, pno=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            pno=0;
            printf("%d is not a prime number.",n);
            break;
        }
        else
        {
            pno++;
        }
    }
    if(pno>0)
    {
        printf("%d is a prime number.",n);
    }

    return 0;
}