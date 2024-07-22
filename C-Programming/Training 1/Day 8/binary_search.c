#include <stdio.h>

// Function to perform binary search in a sorted array
int binarySearch(int arr[], int size, int target)
{
    int left = 0, right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; // Element not found
}

// Function to perform Bubble Sort on an array
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, size);
    printf("Sorted Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    int target;
    printf("\nEnter the element to search for: ");
    scanf("%d", &target);

    int index = binarySearch(arr, size, target);
    if (index != -1)
    {
        printf("Element %d found at index %d.\n", target, index);
    }
    else
    {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
