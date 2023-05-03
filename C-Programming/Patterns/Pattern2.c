#include<stdio.h>
int main()
{
    int n;
    int num=1;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<=n/2; j++)
        {
            printf("%d  ",num);
            num++;
        }
        printf("\n");
    }

    return 0;
}