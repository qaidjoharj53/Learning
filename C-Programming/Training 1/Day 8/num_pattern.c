#include <stdio.h>
int main()
{
    int h;
    printf("Height: ");
    scanf("%d", &h);
    for (int i = 0; i < h; i++)
    {
        for (int j = i + 1; j <= h; j++)
        {
            if (j > 9)
            {
                printf("%d ", j % 10);
            }
            else
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }

    return 0;
}