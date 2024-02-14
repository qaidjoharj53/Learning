#include <stdio.h>
#include <ctype.h>

#define MAX 50

char stack[MAX];
int top = -1;

void push(char item)
{
    stack[++top] = item;
}

char pop()
{
    return stack[top--];
}

int main()
{

    char postfix[MAX] = "AB^C/+AKL-*";
    for (int i = 0; postfix[i] != '\0'; i++)
    {
        if (isalnum(postfix[i]))
        {
            push(postfix[i]);
        }
        else
        {
            char op1 = pop();
            char op2 = pop();
            if (isalnum(op1) && isalnum(op2))
            {
                printf("(%c%c%c)", op2, postfix[i], op1);
            }
            else
            {
                printf("%c%c", postfix[i], op1);
            }
        }
    }

    return 0;
}