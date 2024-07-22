#include <stdio.h>

int merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1, n2 = high - mid;
    int X[n1], Y[n2];

    for (int i = 0; i < n1; i++)
    {
        X[i] = arr[i];
    }
    for (int i = 0; i < n2; i++)
    {
        Y[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = low;
    while (k != high)
    {
        if (X[i] < Y[j])
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
    return arr;
}

int main()
{
    int a[] = {4, 5, 10, 12, 6, 8, 11, 15};
    int l = 0, n = 8, h = n - 1, m = (l + h) / 2;
    a[n] = merge(a, l, m, h);

    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }

    return 0;
}