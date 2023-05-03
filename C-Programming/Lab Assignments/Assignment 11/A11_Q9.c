#include<stdio.h>
int main()
{   
    int n,a=0;
    printf("How many natural number(s) do you want to print? : ");
    scanf("%d",&n);
    while(n>a)
    {
        printf("%d  ",n);
        n--;
    }
    return 0;
}