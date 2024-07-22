#include<stdio.h>

void frequency();

int main()
{
    int n;
    printf("How many value do you want to print? : ");
    scanf("%d", &n);
    int num[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &num[i]);
    }
    frequency(num,n);

    return 0;
}

void frequency(int n[], int size)
{
    int count=1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(i==j){continue;}
            else if (n[i]==n[j])
            {
                count++;
                n[j]=-9999999;
            }
        }
        if(n[i]!=-9999999)
        {
            printf("Frequency of %d is : %d\n", n[i], count);
        }
        count=1;
    }
}