#include <stdio.h>
int main()
{
    int a[] = {16, 17, 4, 3, 5, 2}, size = 6, high = 0;

    printf("Leaders are: ");
    for (int i = size - 1; i > 0; i--)
    {
        if (a[i] > high)
        {
            high = a[i];
            printf("%d ", a[i]);
        }
    }

    /* int leader[6] = {0, 0, 0, 0, 0, 0};

    for (int i = 0; i < size; i++)
    {
        int c = 0;
        for (j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                c++;
            }
        }
        if ((size - (i + 1)) == c)
        {
            leader[i] = a[i];
        }
    }
    printf("Leaders are: ");
    for (int i = 0; i < size; i++)
    {
        if (leader[i] != 0)
        {
            printf("%d  ", leader[i]);
        }
    } */

    return 0;
}