#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("How many odd numbers do you want to add? : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += (2*i - 1);
    }

    printf("\nThe sum of the first %d odd numbers is = %d\n", n, sum);
    printf("The square of %d is = %d\n\n", n, n*n);

    if (sum == n*n)
    {
        printf("Hence the fact that the sum of first n odd numbers is equal to square of n (i.e. n^2) is TRUE and VERIFIED !");
    }
    else
    {
        printf("Hence the fact that the sum of first n odd numbers is equal to square of n (i.e. n^2) is FALSE !");
    }

    return 0;
}