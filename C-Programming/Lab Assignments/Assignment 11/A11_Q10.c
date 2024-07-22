#include<stdio.h>
int main()
{   //first 10 odd natural no.
    int a=1;
    for(a%2!=0;a<20;a+=2)
    {
        printf("%d  ",a);
    }
    return 0;
}