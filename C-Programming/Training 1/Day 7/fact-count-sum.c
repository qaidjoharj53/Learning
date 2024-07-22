#include <stdio.h>
int main()
{
    int T, x, y;
    printf("Enter number of test cases: ");
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int fact = 1, sum = 0, count = 0;
        printf("Enter the range separated by space: ");
        scanf("%d %d", &x, &y);
        for (int j = 1; j <= y; j++)
        {
            fact *= j;
            if (fact > y)
            {
                break;
            }
            if (fact >= x && fact <= y)
            {
                sum += fact;
                count++;
            }
        }
        printf("%d\n\nSum: %d\nCount: %d\n", fact, sum, count);
    }

    return 0;
}