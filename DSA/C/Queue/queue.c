#include <stdio.h>
#include <stdlib.h>

int queue[50], rear = -1, front = -1;

void enqueue(int item)
{
    if (rear == 49)
    {
        printf("\nOverflow\n");
    }
    else
    {
        if (front == -1)
        {
            front++;
        }
        queue[++rear] = item;
    }
}

int dequeue()
{
    if (front == -1)
    {
        printf("\nUnderflow\n");
    }
    else
    {
        printf("Item deleted: %d\n", queue[front++]);

        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}

void display()
{
    for (int i = front; i <= rear; i++)
    {
        printf("%d\n", queue[i]);
    }
}

int main()
{
    int choice, item;
    while (1)
    {
        printf("\n\n--- MENU ---");
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the item to be inserted: ");
            scanf("%d", &item);
            enqueue(item);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\nExiting...\n");
            exit(0);
        default:
            printf("\nInvalid choice\n");
            break;
        }
    }

    return 0;
}