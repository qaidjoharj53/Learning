#include <stdio.h>
#include <string.h>
int main()
{
    char *s = "   A clever   fox jumps over the lazy    dog   ";
    int count = 0;
    for (; *s != '\0'; s++)
    {
        if (*(s + 1) == 32 && *(s + 1) != '\0')
        {
            continue;
        }

        if (*s != 32 && *(s - 1) == 32)
        {
            count++;
        }
    }
    printf("Total valid spaces: %d", count);

    return 0;
}