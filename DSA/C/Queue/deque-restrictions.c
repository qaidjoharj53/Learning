#include <stdio.h>
#include <stdlib.h>
#define max 5
int queue[max];
int r = -1, f = -1;

void fenqueue();
void renqueue();
void fdequeue();
void rdequeue();
void display();

void front_e_restricted();
void rear_e_restricted();
void front_d_restricted();
void rear_d_restricted();
void double_e_q();

int main()
{
    int ch;
    while (1)
    {
        printf("1.Front Enqueue Restricted\n2.Rear Enqueue Restricted\n3.Front Dequeue Restricted\n4.Rear Dequeue Restricted\n5.General Double-Ended Queue\n0.Exit");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            front_e_restricted();
            break;
        case 2:
            rear_e_restricted();
            break;
        case 3:
            front_d_restricted();
            break;
        case 4:
            rear_d_restricted();
            break;
        case 5:
            double_e_q();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Wrong Choice\n");
        }
    }
    return 0;
}
void fenqueue()
{
    if ((f == 0 && r == max - 1) || (f == r + 1))
    {
        printf("Overflow\n");
    }
    else
    {
        if (f == -1)
        {
            f++;
            r++;
        }
        else
        {
            if (f < 1)
            {
                f = max - 1;
            }
            else
            {
                f = f - 1;
            }
        }
        printf("Enter new element : ");
        scanf("%d", &queue[f]);
    }
}
void renqueue()
{
    if ((f == 0 && r == max - 1) || (f == r + 1))
    {
        printf("Overflow\n");
    }
    else
    {
        if (r == -1)
        {
            f = 0;
            r = 0;
        }
        else if (r == max - 1)
        {
            r = 0;
        }
        else
        {
            r = r + 1;
        }
        printf("Enter new element : ");
        scanf("%d", &queue[r]);
    }
}
void fdequeue()
{
    if (f == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else if (f == max - 1)
        {
            f = 0;
        }
        else
        {
            f++;
        }
    }
}
void rdequeue()
{
    if (f == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else if (r == 0)
        {
            r = max - 1;
        }
        else
        {
            r--;
        }
    }
}
void display()
{
    if (f == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        int i = f;
        do
        {
            printf("%d ", queue[i]);
            i = ((i + 1) % max);
        } while (i != ((r + 1) % max));
        printf("\n");
    }
}
void front_e_restricted()
{
    int z;
    while (1)
    {
        printf("1.Rear Enqueue\n2.Front Dequeue\n3.Rear Dequeue\n4.Display\n0.Exit\n");
        scanf("%d", &z);
        switch (z)
        {
        case 1:
            renqueue();
            break;
        case 2:
            fdequeue();
            break;
        case 3:
            rdequeue();
            break;
        case 4:
            display();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Wrong Choice\n");
        }
    }
}
void rear_e_restricted()
{
    int z;
    while (1)
    {
        printf("1.Front Enqueue\n2.Front Dequeue\n3.Rear Dequeue\n4.Display\n0.Exit\n");
        scanf("%d", &z);
        switch (z)
        {
        case 1:
            fenqueue();
            break;
        case 2:
            fdequeue();
            break;
        case 3:
            rdequeue();
            break;
        case 4:
            display();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Wrong Choice\n");
        }
    }
}
void front_d_restricted()
{
    int z;
    while (1)
    {
        printf("1.Front Enqueue\n2.Rear Enqueue\n3.Rear Dequeue\n4.Display\n0.Exit\n");
        scanf("%d", &z);
        switch (z)
        {
        case 1:
            fenqueue();
            break;
        case 2:
            renqueue();
            break;
        case 3:
            rdequeue();
            break;
        case 4:
            display();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Wrong Choice\n");
        }
    }
}
void rear_d_restricted()
{
    int z;
    while (1)
    {
        printf("1.Front Enqueue\n2.Rear Enqueue\n3.Front Dequeue\n4.Display\n0.Exit\n");
        scanf("%d", &z);
        switch (z)
        {
        case 1:
            fenqueue();
            break;
        case 2:
            renqueue();
            break;
        case 3:
            fdequeue();
            break;
        case 4:
            display();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Wrong Choice\n");
        }
    }
}
void double_e_q()
{
    int z;
    while (1)
    {
        printf("1.Front Enqueue\n2.Rear Enqueue\n3.Front Dequeue\n4.Rear Dequeue\n5.Display\n0.Exit\n");
        scanf("%d", &z);
        switch (z)
        {
        case 1:
            fenqueue();
            break;
        case 2:
            renqueue();
            break;
        case 3:
            fdequeue();
            break;
        case 4:
            rdequeue();
            break;
        case 5:
            display();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Wrong Choice\n");
        }
    }
}