#include<stdio.h>
int main()
{
    int n,unit;
    printf("Enter a number : ");
    scanf("%d",&n);
    unit = n%10;
    printf("The unit digit of the given number is %d",unit);
    return 0;
}