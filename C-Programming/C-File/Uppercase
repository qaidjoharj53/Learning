#include<stdio.h>
int main()
{
    char s[50];
    printf("Enter a String : ");
    fgets(s,50,stdin);
    for (int i = 0; s[i]!='\0'; i++)
    {
        for(int j=97; j<=122; j++)
        {
            if(s[i]==j)
            {
                s[i]-=32;
            }
        }
    }
    printf("Uppercase string is : %s", s);
    

    return 0;
}