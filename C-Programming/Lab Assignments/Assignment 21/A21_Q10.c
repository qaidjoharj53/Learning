#include<stdio.h>
void words();
int main()
{
    char s[100];
    printf("Enter a string : ");
    fgets(s,100,stdin);
    words(s);
    
    return 0;
}

void words(char s[])
{
    int count=1;
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]==32)
        {
            count++;
        }
    }
    printf("No. of words present in the string : %d",count);
}