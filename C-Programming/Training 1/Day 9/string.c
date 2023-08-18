#include <stdio.h>
int main()
{
    /* char s[] = "Qaidjohar Jukker!\nHow are you?";
    puts(s); */

    /* int rnum;
    char arr[50];
    printf("Roll Number and Name: ");
    scanf("%d", &rnum);
    scanf("%[^\n]", &arr);
    printf("\nRoll Number: %d", rnum);
    printf("\nHello%s", arr); */

    char *s = "Smile you are learning new things...";
    int n = 11;
    printf("%.*s\n", n, s);
    printf("%s\n", s + 5);
    printf("%.*s\n", n, s + 5);

    return 0;
}