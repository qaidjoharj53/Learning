#include <stdio.h>
int main()
{
    int n, bit;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Enter the bits to shift : ");
    scanf("%d", &bit);
    printf("SET = %d  ->  ", n);
    n = n | (1 << (bit - 1));
    printf("%d", n);
    printf("\n\n");
    printf("RESET = %d  ->  ", n);
    n = n & ~(1 << (bit - 1));
    printf("%d", n);

    return 0;
}