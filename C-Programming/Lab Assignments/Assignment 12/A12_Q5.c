#include<stdio.h>
int main()
{
    int n,i,a;
    printf("Enter a number : ");
    scanf("%d",&n);
    i = n-n%10;
    printf("Edited number : %d",i);
    return 0;
}