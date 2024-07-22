#include<stdio.h>
int main()
{
    char a[50], b[50]; int i;
    printf("Enter a string  : ");
    fgets(a,50,stdin);
    for(i=0; a[i]!='\0'; i++)
    {
        b[i]=a[i];
    }
    for(i; i<50; i++)
    {
        b[i]=0;
    }
    printf("\nOriginal string 1 : %s", a);
    printf("\nCopied string 2 : %s", b);

    return 0;
}