#include<stdio.h>
int main()
{
    char s[50]; int len=0;
    printf("Enter a string : ");
    fgets(s,50,stdin);
    for(int i=0; s[i]!='\0'; i++){len++;}
    printf("Length of the string is : %d",len-1);

    return 0;
}