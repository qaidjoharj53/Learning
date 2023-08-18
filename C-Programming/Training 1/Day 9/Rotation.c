#include <stdio.h>
#include <string.h>

int main()
{
    char s1[50];
    printf("Enter a number : ");
    scanf("%s", s1);
    char rev[50] = strrev(s1);
    puts(s1);
    printf("\n\n");
    puts(rev);
    if (strcmp(s1, rev) == 1)
    {
        printf("Its a palindrome Number!");
    }
    else
    {
        printf("Its not a Palindrome Number!");
    }

    return 0;
}