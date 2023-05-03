#include<stdio.h>
int main()
{
    int n;
    printf("How many value do you want to print? : ");
    scanf("%d", &n);
    int num[n];
    for(int i=1; i<=n; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &num[i]);
    }
    for(int i=n; i>=1; i--)
    {
        printf("%d\n", num[i]);
    }

    return 0;
}