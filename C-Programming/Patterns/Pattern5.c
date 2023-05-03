#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j>0; j--)
        {
            if(j%2==0)
            {
                printf("0  ");
            }
            else
            {
                printf("1  ");
            }
        }
        printf("\n");
    }

    return 0;
}