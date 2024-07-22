#include<stdio.h>
int calStringLength(char *ptr, int arraysize)
{
    int len=0;
    while(*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len-1;
}

int main()
{
    char str[100];
    printf("Enter a string : ");
    fgets(str,100,stdin);
    printf("\nLength of the given string is : %d", calStringLength(str,100));

    return 0;
}