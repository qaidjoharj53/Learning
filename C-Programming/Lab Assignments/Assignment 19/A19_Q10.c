#include<stdio.h>

void mergedar();
void descending();

int main()
{
    int n;
    printf("How many integers you want to give in an array? : ");
    scanf("%d", &n);
    int ar1[n], ar2[n];
    printf("Enter values in array 1 in descending order:-\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &ar1[i]);
    }
    printf("\nEnter values in array 2 in descending order:-\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &ar2[i]);
    }
    printf("\nMerged array in descending order is :-\n");
    mergedar(ar1, ar2, n);

    return 0;
}

void mergedar(int a1[], int a2[], int size)
{
    int a3[size*2];
    int j=0;
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
    descending(a3,size*2);
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