#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} node;

node *start = NULL, *temp = NULL;

void create_list()
{
    temp = (node *)malloc(sizeof(node));
    printf("Enter new value: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        node *ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void display()
{
    if (start == NULL)
    {
        printf("Underflow!\n");
        return;
    }

    temp = start;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n\n--- MENU ---\n");
        printf("\n1. Create list\n2. Display\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            create_list();
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}