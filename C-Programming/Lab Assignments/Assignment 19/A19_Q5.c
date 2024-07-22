#include<stdio.h>

void rev();

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
    printf("\nValues given in reverse order :-\n");
    rev(num,n);
    
    return 0;
}

void rev(int num[], int size)
{
    for(int i=size-1; i>=0; i--)
    {
        printf("%d\n", num[i]);
    }
}