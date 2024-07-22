#include <stdio.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int item)
{
    if (top >= MAX_SIZE - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = item;
}

int pop()
{
    if (top < 0)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        push(i);
    }
    while (top >= 0)
    {
        result *= pop();
    }
    return result;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("Factorial of %d is %d\n", n, fact);
    return 0;
}
