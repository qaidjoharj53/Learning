#include <stdio.h>

#define MAX 50

char stack[MAX];
int top = -1;

void push(char alpha)
{
    if (top == MAX - 1)
    {
        return;
    }
    stack[++top] = alpha;
}

void pop()
{
    if (top == -1)
    {
        return;
    }
    printf("%c", stack[top--]);
    pop();
}

int main()
{
    char str[] = "programming";
    printf("\nOriginal string: %s\n", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        push(str[i]);
    }
    printf("\nReversed string: ");
    pop();
    return 0;
}
