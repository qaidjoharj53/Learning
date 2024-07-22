#include<stdio.h>
int interest();
int main()
{
    int a, r, t;
    printf("Enter the principal amount(INR) : ");
    scanf("%d",&a);
    printf("Enter the rate of interest(per annum) : ");
    scanf("%d",&r);
    printf("Enter the time(year) : ");
    scanf("%d",&t);
    printf("The calculated simple interest is : %d", interest(a,r,t));
    return 0;
}

int interest(int a, int r, int t)
{
    return a*t*(r*.01);
}