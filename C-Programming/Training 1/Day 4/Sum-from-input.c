#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    /* for (int i = 0; i <= n; i++)
    {
        sum += i;
    }*/
    sum = (n * (n + 1)) / 2;
    printf("%d", sum);

    return 0;
}