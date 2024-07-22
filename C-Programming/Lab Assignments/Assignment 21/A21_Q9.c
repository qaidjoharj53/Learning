#include<stdio.h>
int main()
{
    char s[100];
    printf("Enter a string : ");
    fgets(s,100,stdin);
    for(int i=0; s[i]!=0; i++)
    {
        int count=1;
        for(int j=0; s[j]!=0; j++)
        {
            if(i==j){continue;}
            else if(s[i]==s[j])
            {
                count++;
                s[j]=32;
            }
        }
        if(s[i]!=32 && s[i]!='\n')
        {
            printf("\nFrequency of %c is : %d", s[i], count);
        }
    }

    return 0;
}