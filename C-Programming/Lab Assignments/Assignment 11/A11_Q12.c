#include<stdio.h>
int main()
{   //first 10 even natural no.
    int a=2;
    for(a%2==0;a<=20;a+=2)
    {
        printf("%d  ",a);
    }
    return 0;
}