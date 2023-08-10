#include <stdio.h>
int main()
{
    int n, c;
    printf("Enter a number : ");
    scanf("%d", &n);
    c = printf("%d", n);
    printf("\n\nCount of number present: %d", c);

    return 0;
}