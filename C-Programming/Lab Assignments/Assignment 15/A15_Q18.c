#include<stdio.h>
void square();
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    sq(n);
    return 0;
}

void sq(int n)
{
    printf("Square of %d is : %d", n, n*n);
}