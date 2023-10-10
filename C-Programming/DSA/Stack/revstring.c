#include <stdio.h>
#include <stdlib.h>

#define MAX 50

void pop();

char stack[MAX];
int top = -1;

int main()
{
    int a = printf("\nEnter the string:");
    top = a - 1;
    scanf("%s", stack);
    printf("Reversed string:\n");
    pop();
    return 0;
}

void pop()
{
    if (top == -1)
    {
        exit(0);
    }
    printf("%c", stack[top]);
    pop(stack[top--]);
}