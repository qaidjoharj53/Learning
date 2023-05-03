#include<stdio.h>
int main()
{
    int n;
    int num=65;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j>0; j--,num++)
        {
            if(j%2==0)
            {
                printf("%c  ",num+32);
            }
            else
            {
                printf("%c  ",num);
            }
        }
        printf("\n");
    }

    return 0;
}