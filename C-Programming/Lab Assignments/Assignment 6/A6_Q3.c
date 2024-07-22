#include<stdio.h>
void Add()
{
    int a, b;
    printf("Enter 1st number : ");
    scanf("%d", & a);
    printf("Enter 2nd number : ");
    scanf("%d", & b);
    printf("\nSum of two numbers is : %d\n\n",a+b);
}
void Subtract()
{
    int a,b;
    printf("Difference between two numbers : %d\n\n",a-b);
}
void Multiply()
{
    int a,b;
    printf("Product of two numbers : %d\n\n",a*b);
}
void Divide()
{
    int a,b;
    printf("Division of two numbers : %d\n\n",a/b);
}

int main()
{
    Add();
    Subtract();
    Multiply();
    Divide();
    return 0;
}