#include<stdio.h>

void unique();

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
    printf("\nUnique number are :-\n");
    unique(num, n);

    return 0;
}

void unique(int no[], int size)
{
    int a=0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(i==j){continue;}
            else if(no[i]==no[j])
            {
                a++;
                break;
            }
        }
        if(a==0){printf("%d\n", no[i]);}
        a=0;
    }
}