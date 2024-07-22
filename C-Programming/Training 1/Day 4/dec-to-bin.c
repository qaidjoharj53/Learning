#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    for (int i = 0; i < 8; i++)
    {
        if ((num & (128 >> i)) == 0)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }

    return 0;
}