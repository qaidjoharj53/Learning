#include <stdio.h>
int main()
{
    int i = 040, j = 0x20, k, l, m;
    k = i | j;
    l = i & j;
    m = k ^ l;
    printf("%d %d %d %d %d", i, j, k, l, m);
    printf("\n\n");
    int a = 32;
    printf("%o  %x", a, a);
    printf("\n\n");
    int b = 4, x;
    x = b << 2;
    printf("%d   %d", x, b);

    return 0;
}
