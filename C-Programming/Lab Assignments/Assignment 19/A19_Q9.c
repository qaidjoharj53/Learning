#include<stdio.h>

void mergedar();

int main()
{
    int n;
    printf("How many integers you want to give in an array? : ");
    scanf("%d", &n);
    int ar1[n], ar2[n];
    printf("Enter values in array 1:-\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &ar1[i]);
    }
    printf("\nEnter values in array 2:-\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &ar2[i]);
    }
    printf("\nMerged array is :-\n");
    mergedar(ar1, ar2, n);

    return 0;
}

void mergedar(int a1[], int a2[], int size)
{
    int a3[size*2];
    static int j=0;
    for(int i = 0; i < size; i++)
    {
        a3[i]=a1[i];
    }
    for(int i = size; i < size*2; i++)
    {
        while(j<size)
        {
            a3[i]=a2[j];
            j++;
            break;
        }
    }
    for (int i = 0; i < size*2; i++)
    {
        if(i==size*2-1){printf("%d", a3[i]);}
        else{printf("%d, ", a3[i]);}
    }
}