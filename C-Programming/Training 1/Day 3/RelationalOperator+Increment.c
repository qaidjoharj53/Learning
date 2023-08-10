#include <stdio.h>
int main()
{
    int a = 0, b = 0, x;
    x = a++ || b++;
    printf("A = %d and B = %d\nX = %d", a, b, x);

    return 0;
}