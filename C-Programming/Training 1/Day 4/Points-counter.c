#include <stdio.h>

int my_numbers[] = {1, 2, 3, 4, 5};
int n = 5;

int main()
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (my_numbers[i] == 8)
        {
            c += 5;
        }
        else if (my_numbers[i] % 2 == 0)
        {
            c++;
        }
        else
        {
            c += 3;
        }
    }
    printf("Points: %d", c);
    return 0;
}