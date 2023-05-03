#include <stdio.h>
int LCM();
int main()
{
    int n1, n2, max;
    printf("Enter first integer : ");
    scanf("%d", &n1);
    printf("Enter second integer : ");
    scanf("%d", &n2);
    LCM(n1, n2);
    return 0;
}

int LCM(int n1, int n2)
{
    int max;
    max = n1>n2?n1:n2;
    for(;1;max++)
    {
        if ((max % n1 == 0) && (max % n2 == 0))
        {
            printf("\nThe LCM of %d and %d is : %d\n", n1, n2, max);
            break;
        }
    }
}