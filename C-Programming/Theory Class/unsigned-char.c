#include<stdio.h>

int main()
{
    unsigned char c=-3;
    printf("%d %u\n", c,c);
    printf("%d %u", ~c,~c);
    return 0;
}