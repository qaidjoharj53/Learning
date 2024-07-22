#include<stdio.h>
void vocon(char *ptr)
{
    int v=0, c=-1;
    for(;*ptr != '\0';ptr++)
    {
        if(*ptr == 32)
        {
            continue;
        }
        else if(*ptr=='a' | *ptr=='e' | *ptr=='i' | *ptr=='o' | *ptr=='u' | *ptr=='A' | *ptr=='E' | *ptr=='I' | *ptr=='O' | *ptr=='U')
        {
            v++;
        }
        else{
            c++;
        }
    }
    printf("No. of vowels are : %d",v);
    printf("No. of consonants are : %d",c);
    
}

int main()
{
    char str[100];
    printf("Enter a string : ");
    fgets(str,100,stdin);
    vocon(str);
    return 0;
}