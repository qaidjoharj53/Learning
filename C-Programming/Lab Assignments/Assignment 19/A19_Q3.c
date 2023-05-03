#include<stdio.h>

void descending();
void ascending();

int main()
{
    int n;
    printf("How many integers you want to sort? : ");
    scanf("%d", &n);
    int num[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &num[i]);
    }
    printf("\nAscending order : ");
    ascending(num,n);
    printf("\n\nDescending order : ");
    descending(num,n);
    return 0;
}

void descending(int n[], int size)
{
    int a=0, no[size];
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(n[i]<n[j])
            {
                a++;
            }
        }
        no[a]=n[i];
        a=0;
    }

    for(int i=0; i<size; i++)
    {
        if(i==size-1){ printf("%d", no[i]);}
        else{printf("%d > ", no[i]);}
    }
}

void ascending(int n[], int size)
{
    int a=0, no[size];
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(n[i]>n[j])
            {
                a++;
            }
        }
        no[a]=n[i];
        a=0;
    }

    for(int i=0; i<size; i++)
    {
        if(i==size-1){ printf("%d", no[i]);}
        else{printf("%d < ", no[i]);}
    }
}