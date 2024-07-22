#include<stdio.h>
int main()
{
    int n, k;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        for(int j=n; j>i; j--)
        {
            printf("   ");
        }
        
        for(k=0; k<i; k++)
        {
            printf("*  ");
        }
        
        for(int p=k-1; p>0; p--)
        {
            printf("*  ");
        }

        printf("\n");
    }

    return 0;
}