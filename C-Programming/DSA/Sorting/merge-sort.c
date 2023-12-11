#include <stdio.h>

void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1, n2 = high - mid;
    int X[n1], Y[n2];

    for (int i = 0; i < n1; i++)
    {
        X[i] = arr[low + i];
    }
    for (int i = 0; i < n2; i++)
    {
        Y[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2)
    {
        if (X[i] <= Y[j])
        {
            arr[k] = X[i];
            i++;
        }
        else
        {
            arr[k] = Y[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = X[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = Y[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    mergeSort(a, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
