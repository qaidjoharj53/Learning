#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter 1st number : ");
    scanf("%d", & a);
    printf("Enter 2nd number : ");
    scanf("%d", & b);
    
    printf("\nSum of two numbers : %d\n\n",a+b);
    printf("Difference between two numbers : %d\n\n",a-b);
    printf("Product of two numbers : %d\n\n",a*b);
    printf("Division of two numbers : %d\n\n",a/b);
    return 0;
}