#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
} node;

node *start, *rear, *temp;
int count = 0;

create_node()
{
    temp = (node *)malloc(sizeof(node));
    printf("Enter new element: ");
    scanf("%d", temp->data);
    temp->prev = NULL;
    temp->next = NULL;
    if (start == NULL)
    {
        start = temp;
        rear = temp;
    }
    else
    {
        rear->next = temp;
        temp->prev = rear;
        rear = temp;
    }
    count++;
}

delete_node(pos)
{
    if (count / 2 <= pos)
    {
        temp = start;
        while (pos != 1)
        {
            temp = temp->next;
        }
        if (temp == start)
        {
            temp->next->prev = NULL;
            free(temp);
            temp = NULL;
        }
        else
        {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            free(temp);
            temp = NULL;
        }
        }
    else
    {
        temp = rear;
        while (pos != 1)
        {
            temp = temp->prev;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
        temp = NULL;
    }
}

display_rev()
{
    temp = rear;
    while (temp->prev != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
}

display_fwd()
{
    temp = start;
    while (temp->next != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int choice, pos;
    while (1)
    {
        printf("\n1. Create node\n2. Delete node\n3. Display in reverse\n4. Display in forward\n5. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create_node();
            break;
        case 2:
            printf("Enter position: ");
            scanf("%d", &pos);
            delete_node(pos);
            break;
        case 3:
            display_rev();
            break;
        case 4:
            display_fwd();
            break;
        case 5:
            return 0;
        default:
            printf("Invalid choice!");
            break;
        }
    }
    return 0;
}