/* #include <stdio.h>

int main()
{
    int size, position, value;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0)
    {
        printf("Invalid array size.\n");
        return 0;
    }

    int arr[size + 1];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert: ");
    scanf("%d", &position);

    if (position < 1 || position > size + 1)
    {
        printf("Invalid position. Insertion not possible.\n");
        return 0;
    }

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Shift elements to the right to make space for the new element
    for (int i = size; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the value at the specified position
    arr[position - 1] = value;
    size++; // Increase the size of the array

    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
 */

#include <stdio.h>

int main()
{
    int size, position;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0)
    {
        printf("Invalid array size. Please choose a size between 1 and 100.\n");
        return 0;
    }

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to remove (1-%d): ", size);
    scanf("%d", &position);

    if (position < 1 || position > size)
    {
        printf("Invalid position. Removal not possible.\n");
        return 0;
    }

    // Shift elements to the left to overwrite the element to be removed
    for (int i = position - 1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--; // Decrease the size of the array

    printf("Array after removal:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
