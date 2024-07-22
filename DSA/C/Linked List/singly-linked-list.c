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
}
