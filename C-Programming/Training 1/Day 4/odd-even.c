#include <stdio.h>
int main()
{
    // even - odd finding
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num & 1)
    {
        printf("ODD Number");
    }
    else
    {
        printf("EVEN Number");
    }

    return 0;
}