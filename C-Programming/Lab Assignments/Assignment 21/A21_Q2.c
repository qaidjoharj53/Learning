#include<stdio.h>
int main()
{
    char a[50], b[50];
    int n;
    printf("Enter string 1 : ");
    fgets(a,50,stdin);
    printf("Enter string 2 : ");
    fgets(b,50,stdin);
    for (int i = 0; a[i]!='\0' && b[i]!='\0'; i++)
    {
        if(a[i]==b[i])
        {
            n=1;
        }
        else
        {
            n=0;
            break;
        }
    }
    if(n==0)
    {
        printf("Strings are not equal.");
    }
    if(n==1)
    {
        printf("Strings are equal.");
    }
    
    return 0;
}