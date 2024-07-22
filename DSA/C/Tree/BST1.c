#include <stdio.h>
#include <stdlib.h>

typedef struct treenode
{
    int data;
    struct treenode *l, *r;
} node;

node *temp, *root;

void create_node(int data)
{
    temp = (node *)malloc(sizeof(node));
    temp->data = data;
    temp->l = temp->r = NULL;
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        node *p = root, *q;
        while (p != NULL)
        {
            if (p->data > temp->data)
            {
                q = p;
                p = p->l;
            }
            else
            {
                q = p;
                p = p->r;
            }
        }
        if (q->data > temp->data)
        {
            q->l = temp;
        }
        else
        {
            q->r = temp;
        }
    }
}

void inorder(node *p)
{
    if (p != NULL)
    {
        inorder(p->l);
        printf("%d ", p->data);
        inorder(p->r);
    }
}

void preorder(node *p)
{
    if (p != NULL)
    {
        printf("%d ", p->data);
        preorder(p->l);
        preorder(p->r);
    }
}

void postorder(node *p)
{
    if (p != NULL)
    {
        postorder(p->l);
        postorder(p->r);
        printf("%d ", p->data);
    }
}

node *search(node *p, int item)
{
    if (item == p->data || p == NULL)
        return p;

    else if (item < p->data)
        search(p->l, item);

    else
        search(p->r, item);

    return p;
}

int main()
{
    int ch, data;
    while (1)
    {
        printf("\n1. Insert\n2. Inorder\n3. Preorder\n4. Postorder\n5. Search\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the data: ");
            scanf("%d", &data);
            create_node(data);
            break;
        case 2:
            inorder(root);
            break;
        case 3:
            preorder(root);
            break;
        case 4:
            postorder(root);
            break;
        case 5:
            printf("Enter the data: ");
            scanf("%d", &data);
            temp = search(root, data);
            if (temp == NULL)
                printf("Not found!\n");
            else
                printf("Found!\n");
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}