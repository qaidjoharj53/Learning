#include <stdio.h>

int stack1[50], stack2[50], top1 = -1, top2 = -1;

void push(int item, int stack[], int top)
{
    if (top == 49)
    {
        printf("\nOverflow\n");
    }
    else
    {
        stack[++top] = item;
    }
}

int pop()
{
    if (top2 == -1)
    {
        printf("\nUnderflow\n");
    }
    else
    {
        printf("Item deleted: %d\n", stack2[top2--]);
    }
}

void display()
{
    for (int i = 0; i <= top1; i++)
    {
        printf("%d\n", stack1[i]);
    }
}

void peek()
{
    if (top1 == -1)
    {
        printf("\nUnderflow\n");
    }
    else
    {
        printf("Top element: %d\n", stack1[top1]);
    }
}

int main()
{
    int choice, item;
    while (1)
    {
        printf("--- MENU ---");
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the item to be inserted: ");
            scanf("%d", &item);
            push(item, stack1, top1++);
            break;

        case 2:
            while (top1 != -1)
            {
                push(stack1[top1--], stack2, top2++);
            }
            pop();
            while (top2 != -1)
            {
                push(stack2[top2--], stack1, top1++);
            }
            break;

        case 3:
            display();
            break;

        case 4:
            return 0;

        default:
            printf("\nInvalid choice\n");
        }
    }

    return 0;
}