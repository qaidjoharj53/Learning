#include <stdio.h>

#define MAX 5

int queue[MAX], front = -1, rear = -1;

void enqueue(int item)
{
    if ((front == 0 && rear == MAX - 1) || front == rear + 1)
    {
        printf("\nOverflow!\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear = (rear + 1) % MAX;
        queue[rear] = item;
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("\nUnderflow!\n");
    }
    else
    {
        printf("\nDeleted item: %d\n", queue[front]);
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % MAX;
        }
    }
}

void display()
{
    if (front == -1)
    {
        printf("\nQueue is empty!\n");
    }
    else
    {
        for (int i = front; i != rear; i = (i + 1) % MAX)
        {
            printf("%d  ", queue[i]);
        }
        printf("%d\n", queue[rear]);
    }
}

int main()
{
    int choice, item;
    while (1)
    {
        printf("\n\n--- MENU ---");
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the item: ");
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
            return 0;
        default:
            printf("\nInvalid choice!\n");
            break;
        }
    }

    return 0;
}