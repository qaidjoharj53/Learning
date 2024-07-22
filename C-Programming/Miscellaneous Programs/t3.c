#include <stdio.h>
int main()
{
    int n;
    printf("\tThis program will print the multiplication table of a given number\n");
    printf("\nEnter a number : ");
    scanf("%d", &n);
    printf("\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d  x  %2d  =  %3d\n", n, i, n * i);
    }
    printf("\n");
    return 0;
}