#include<stdio.h>
void analyse();
int main()
{
    char s[50];
    printf("Enter a string : ");
    scanf("%s", &s);
    analyse(s);
    
    return 0;
}

void analyse(char s[])
{
    int a=0, n=0, p=0;
    for(int i=0; s[i]!='\0'; i++)
    {
        for(int j=65, k=97;j<=90 && k<=122; j++, k++)
        {
            if(s[i]==j || s[i]==k)
            {
                a++;
            }
        }
        
        for(int l=48; l<=57; l++)
        {
            if(s[i]==l)
            {
                n++;
            }
        }
        
        for(int w=32; w<=47; w++)
        {
            if(s[i]==w)
            {
                p++;
            }
        }
        for(int x=58; x<=64; x++)
        {
            if(s[i]==x)
            {
                p++;
            }
        }
        for(int y=91; y<=96; y++)
        {
            if(s[i]==y)
            {
                p++;
            }
        }
        for(int z=123; z<=126; z++)
        {
            if(s[i]==z)
            {
                p++;
            }
        }
    }
    printf("\nTotal no. of alphabets present in the string : %d",a);
    printf("\nTotal no. of digits present in the string : %d",n);
    printf("\nTotal no. of special characters present in the string : %d",p);
}