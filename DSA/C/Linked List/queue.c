#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} queue;

queue *front = NULL, *rear = NULL, *temp = NULL;

void create_node()
{
    temp = (queue *)malloc(sizeof(queue));
    printf("Enter new value: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
}

void enqueue()
{
    create_node();
    if (front == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
}

void dequeue()
{
    if (front == NULL)
    {
        printf("Underflow!\n");
        return;
    }

    temp = front;
    printf("deleted element: %d\n", temp->data);
    front = front->next;
    free(temp);
    temp = NULL;
}

void display()
{
    if (front == NULL)
    {
        printf("Underflow!\n");
        return;
    }

    temp = front;
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
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}