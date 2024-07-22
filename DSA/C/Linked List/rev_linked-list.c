#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} node;

node *start = NULL, *rear = NULL, *temp = NULL;

void create_node()
{
    temp = (node *)malloc(sizeof(node));
    printf("Enter the element: ");
    scanf("%d", temp->data);
    temp->next = NULL;
    if (start == NULL)
    {
        start = temp;
        rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
}

void display(node *start)
{
    if (start == NULL)
        return;

    display(start->next);
    printf("%d ", start->data);
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n--- MENU ---\n");
        printf("\n1. Create node\n2. Display\n3. Exit\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            create_node();
            break;
        case 2:
            display(start);
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}