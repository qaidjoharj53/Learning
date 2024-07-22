#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int deque[MAX];
int front = -1, rear = -1;

void Fenqueue(int x)
{
    if ((front == 0 && rear == MAX - 1) || front == rear + 1)
    {
        printf("Overflow!\n");
        return;
    }

    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if (front == 0)
    {
        front = MAX - 1;
    }
    else
    {
        front--;
    }

    deque[front] = x;
}

void Renqueue(int x)
{
    if ((front == 0 && rear == MAX - 1) || front == rear + 1)
    {
        printf("Overflow!\n");
        return;
    }

    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if (rear == MAX - 1)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }

    deque[rear] = x;
}

int Fdequeue()
{
    if (front == -1)
    {
        printf("Underflow!\n");
        return -1;
    }

    int x = deque[front];

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == MAX - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }

    return x;
}

int Rdequeue()
{
    if (front == -1)
    {
        printf("Underflow!\n");
        return -1;
    }

    int x = deque[rear];

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (rear == 0)
    {
        rear = MAX - 1;
    }
    else
    {
        rear--;
    }

    return x;
}

void display()
{
    if (front == -1)
    {
        printf("Deque is empty.\n");
        return;
    }

    printf("Deque elements: ");
    for (int i = front; i != rear; i = (i + 1) % MAX)
    {
        printf("%d ", deque[i]);
    }
    printf("%d\n", deque[rear]);
}

int main()
{
    int choice, item;

    while (1)
    {
        printf("\n--- DEQue Operations ---\n\n");
        printf("1. Insert at front\n");
        printf("2. Insert at rear\n");
        printf("3. Delete from front\n");
        printf("4. Delete from rear\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to insert: ");
            scanf("%d", &item);
            Fenqueue(item);
            break;

        case 2:
            printf("Enter the element to insert: ");
            scanf("%d", &item);
            Renqueue(item);
            break;

        case 3:
            item = Fdequeue();
            if (item != -1)
            {
                printf("Deleted element is %d\n", item);
            }
            break;

        case 4:
            item = Rdequeue();
            if (item != -1)
            {
                printf("Deleted element is %d\n", item);
            }
            break;

        case 5:
            display();
            break;

        case 6:
            exit(0);

        default:
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
