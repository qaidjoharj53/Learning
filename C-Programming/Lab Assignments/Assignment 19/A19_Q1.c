#include<stdio.h>

int greatest();

int main()
{
    int n;
    printf("How many integers do you want to give? : ");
    scanf("%d", &n);
    int num[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &num[i]);
    }
    printf("\nGreatest number among the given numbers is : %d", greatest(num,n));

    return 0;
}

int greatest(int num[], int size)
{
    int a, greatest;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(num[i]>num[j])
            {
                a++;
            }
        }
        if(a==size-1)
        {
            greatest = num[i];
            break;
        }
        else
        {
            a=0;
        }
    }
    return greatest;
}