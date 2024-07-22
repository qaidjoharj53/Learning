#include<stdio.h>
#include<string.h>
//Chat GPT
void reverse(char *str)
{
    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1;
    char temp;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
 
        start++;
        end--;
    }
}
 
int main()
{
    char string[50];
    printf("Enter a string : ");
    fgets(string,50,stdin);
    reverse(string);
    printf("\nReversed string: %s\n\n", string);
 
    return 0;
}