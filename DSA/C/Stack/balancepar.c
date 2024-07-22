#include <stdio.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char);
void pop();

int main()
{
    char str[MAX];
    char eq[] = "{{([])}}";
    for (int i = 0; eq[i] != '\0'; i++)
    {
        if (eq[i] == '{' || eq[i] == '[' || eq[i] == '(')
        {
            push(eq[i]);
        }
        else if (eq[i] == '}' || eq[i] == ']' || eq[i] == ')')
        {
            if (eq[i] == '}')
            {
                if (top == -1 || stack[top] != '{')
                {
                    printf("Unbalanced\n");
                    return 0;
                }
                pop();
            }
            else if (eq[i] == ']')
            {
                if (top == -1 || stack[top] != '[')
                {
                    printf("Unbalanced\n");
                    return 0;
                }
                pop();
            }
            else if (eq[i] == ')')
            {
                if (top == -1 || stack[top] != '(')
                {
                    printf("Unbalanced\n");
                    return 0;
                }
                pop();
            }
        }
    }

    if (top == -1)
    {
        printf("Balanced\n");
    }
    else
    {
        printf("Unbalanced\n");
    }

    return 0;
}

void push(char c)
{
    stack[++top] = c;
}

void pop()
{
    top--;
}
