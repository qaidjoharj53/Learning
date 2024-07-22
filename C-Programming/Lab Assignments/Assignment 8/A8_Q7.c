#include<stdio.h>
int main()
{
    int INR,USD;
    printf("Enter money in INR : ");
    scanf("%d", &INR);
    USD = INR*80;
    printf("Value of money in USD : %d",USD);
    return 0;
}