#include<stdio.h>

void increasing();
void decreasing();

int main()
{
    int num[10];
    for(int i=0; i<10; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &num[i]);
    }
    printf("\nIncreasing order : ");
    increasing(num);
    printf("\n\nDecreasing order : ");
    decreasing(num);
    return 0;
}

void increasing(int n[])
{
    int a=0, no[10];
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(n[i]<n[j])
            {
                a++;
            }
        }
        no[a]=n[i];
        a=0;
    }

    for(int i=0; i<10; i++)
    {
        if(i==9){ printf("%d", no[i]);}
        else{printf("%d < ", no[i]);}
    }
}

void decreasing(int n[])
{
    int a=0, no[10];
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(n[i]>n[j])
            {
                a++;
            }
        }
        no[a]=n[i];
        a=0;
    }

    for(int i=0; i<10; i++)
    {
        if(i==9){ printf("%d", no[i]);}
        else{printf("%d < ", no[i]);}
    }
}