#include <stdio.h>

int findElement(int array[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int size, e;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to find: ");
    scanf("%d", &e);

    int index = findElement(arr, size, e);

    if (index != -1)
    {
        printf("Element %d found at index %d and at location %d.\n", e, index, index + 1);
    }
    else
    {
        printf("Element %d not found in the array.\n", e);
    }

    return 0;
}
