#include <stdio.h>
int main()
{
    int a = 10, b = a++,c=++a;
    printf("%d %d %d\n", a, a++, ++a);
    printf("%d %d %d", a, ++b, b++);
}
