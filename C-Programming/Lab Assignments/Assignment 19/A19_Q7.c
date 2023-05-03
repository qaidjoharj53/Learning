#include<stdio.h>

int countdup();

int main()
{
    int n;
    printf("How many integers you want to give? : ");
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &num[i]);
    }
    printf("Total number of duplicate elements present are : %d", countdup(num, n));

    return 0;
}

int countdup(int no[], int size)
{
    int count=0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(i==j){continue;}
            else if(no[i]==no[j])
            {
                count++;
            }
        }
    }
    return count/2;
}