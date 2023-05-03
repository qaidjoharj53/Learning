#include<stdio.h>
int main()
{
    char s[50], a[50];
    int i, j=0;

    printf("Enter a string : ");
    fgets(s,50,stdin);

    for(i=0; s[i]!='\0'; i++){}
    for(i-=1; i>=0; i--)
    {
        while(s[j]!='\0')
        {
            a[j]=s[i];
            j++;
            break;
        }
    }
    printf("Reversed string : %s", a);

    return 0;
}