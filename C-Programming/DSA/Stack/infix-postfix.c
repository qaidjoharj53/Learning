#include <stdio.h>
#include <ctype.h>

#define MAX 50

char stack[MAX] = "x+(y*z)/a^b-c";
int top = -1;

void push(char);
char pop();
int precedence(char);

int main()
{
    for (int i = 0; stack[i] != '\0'; i++)
    {
        if (isalnum(stack[i]))
            printf("%c", stack[i]);

        else if (stack[i] == '(')
            push(stack[i]);

        else if (stack[i] == ')')
        {
            while (stack[top] != '(')
                printf("%c", pop());

            pop();
        }

        else
        {
            while (precedence(stack[top]) >= precedence(stack[i]))
                printf("%c", pop());

            push(stack[i]);
        }
    }

    if (top != -1)
    {
        printf("%c", pop());
    }

    return 0;
}

void push(char item)
{
    stack[++top] = item;
}

char pop()
{
    return (stack[top--]);
}

int precedence(char symbol)
{
    if (symbol == '^')
        return 3;

    else if (symbol == '*' || symbol == '/')
        return 2;

    else if (symbol == '+' || symbol == '-')
        return 1;

    else
        return 0;
}