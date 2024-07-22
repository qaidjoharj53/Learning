#include <stdio.h>
int main()
{
    int n = 0, sum = 0;
    do
    {
        sum += n;
        printf("Enter a number : ");
        scanf("%d", &n);
    } while (n != -1);

    printf("Sum of numbers before -1: %d", sum);

    return 0;
}