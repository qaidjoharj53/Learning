#include<stdio.h>
int main()
{   //first 10 even natural no. in reverse order.
    int a=20;
    for(a%2==0;a>0;a-=2)
    {
        printf("%d  ",a);
    }
    return 0;
}