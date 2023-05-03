#include<stdio.h>

int smallest();

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
    printf("\nSmallest number among the given numbers is : %d", smallest(num,n));

    return 0;
}

int smallest(int num[], int size)
{
    int a, smallest;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(num[i]<num[j])
            {
                a++;
            }
        }
        if(a==size-1)
        {
            smallest = num[i];
            break;
        }
        else
        {
            a=0;
        }
    }
    return smallest;
}
