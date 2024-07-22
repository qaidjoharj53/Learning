#include <stdio.h>

void TOH(int, char, char, char);

int main()
{
    char s = 'A', a = 'B', t = 'C';
    int n = 4;
    TOH(n, s, a, t);

    return 0;
}

void TOH(int n, char src, char aux, char target)
{
    if (n > 0)
    {
        TOH(n - 1, src, target, aux);
        printf("%c -> %c\n", src, target);
        TOH(n - 1, aux, src, target);
    }
}