#include<stdio.h>
int main()
{
    int n, i;
    printf("How many natural no. do you want to print? : ");
    scanf("%d",&n);
    for (i=0; n>i; n--)
    {
        printf("%d  ",n);
    }
    return 0;
}