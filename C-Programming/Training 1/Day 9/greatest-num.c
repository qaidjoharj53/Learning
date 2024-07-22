#include <stdio.h>

int len(int);

int main()
{
    int a[] = {52, 98, 62, 72, 9, 1, 19}, n = 7, index;
    int g[10] = {0};
    for (int i = 0; i < n; i++)
    {
        int c = len(a[i]);
        while (c)
        {
            index = a[i] % 10;
            g[index]++;
            a[i] /= 10;
            c--;
        }
    }
    printf("Greatest Number: ");
    for (int i = 9; i >= 0; i--)
    {
        while (g[i])
        {
            printf("%d", i);
            g[i]--;
        }
    }

    return 0;
}

int len(int n)
{
    int c = 0;
    while (n > 0)
    {
        n /= 10;
        c++;
    }
    return c;
}