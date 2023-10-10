#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int stack[MAX], top = -1;

void push()
{
    int item;
    if (top == MAX - 1)
    {
        printf("\nStack Overflow!!");
        return;
    }
    printf("\nEnter the element to be pushed:");
    scanf("%d", &item);
    stack[++top] = item;
    printf("\nItem pushed successfully!!");
}

void pop()
{
    if (top == -1)
    {
        printf("\nStack Underflow!!");
        return;
    }
    printf("\nItem popped = %d", stack[top--]);
}

void display_all()
{
    int i;
    if (top == -1)
    {
        printf("\nStack is empty!!");
        return;
    }
    printf("\nStack elements are:\n");
    for (i = top; i >= 0; i--)
        printf("%d\n", stack[i]);
}

void peek()
{
    if (top == -1)
    {
        printf("\nStack is empty!!");
        return;
    }
    printf("\nItem at the top = %d", stack[top]);
}

int main()
{
    int ch;
    while (1)
    {
        printf("\n\n=== Stack Menu ===");
        printf("\n\n1.Push\n2.Pop\n3.Display all items\n4.Display top item\n5.Exit");
        printf("\n\nEnter your choice(1-4):");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display_all();
            break;

        case 4:
            peek();
        case 5:
            exit(0);
        default:
            printf("\nWrong Choice!!");
        }
    }

    return 0;
}