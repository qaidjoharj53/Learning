#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} stack;

stack *top = NULL, *temp = NULL;

void create_node()
{
    temp = (stack *)malloc(sizeof(stack));
    printf("Enter new value: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
}

void push()
{
    create_node();
    if (top == NULL)
    {
        top = temp;
    }
    else
    {
        temp->next = top;
        top = temp;
    }
}

void pop()
{
    if (top == NULL)
    {
        printf("Underflow!\n");
        return;
    }

    temp = top;
    top = top->next;
    free(temp);
    temp = NULL;
}

void display()
{
    if (top == NULL)
    {
        printf("Underflow!\n");
        return;
    }

    temp = top;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void peek()
{
    if (top == NULL)
    {
        printf("Underflow!\n");
        return;
    }

    printf("%d\n", top->data);
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n\n--- MENU ---\n");
        printf("\n1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}