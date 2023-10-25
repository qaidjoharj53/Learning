#include <stdio.h>

int main()
{
    int t, arr[50], n;
    printf("Test Cases: ");
    scanf("%d", &t);

    for (int a = 0; a < t; a++)
    {
        printf("\nNumber of dolls: ");
        scanf("%d", &n);

        for (int b = 0; b < n; b++)
        {
            printf("Type of Doll: ");
            scanf("%d", &arr[b]);
        }

        for (int c = 0; c < n; c++)
        {
            int count = 1;
            for (int d = 0; d < n; d++)
            {
                if (c == d)
                    continue;

                if (arr[c] == arr[d])
                {
                    count++;
                    arr[d] = -1;
                }
            }
            if (arr[c] == -1)
                continue;

            if (count % 2 != 0)
                printf("%d  ", arr[c]);
        }
    }
    return 0;
}