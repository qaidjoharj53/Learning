#include <stdio.h>

int main()
{
    int a = 3;
    printf("%d  %d  %d", a, a++, ++a);
    return 0;
}

// Output:
// 3  3  5
// 4  4  5