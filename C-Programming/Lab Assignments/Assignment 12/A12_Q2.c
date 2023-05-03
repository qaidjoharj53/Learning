#include<stdio.h>
int main()
{
    int a, i;
    printf("How many natural no. do you want to type? : ");
    scanf("%d",&a);
    for (i=1; i<=a; i++)
    {
        printf("%d  ",i);
    }
    return 0;
}