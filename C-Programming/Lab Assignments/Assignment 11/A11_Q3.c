#include<stdio.h>
int main()
{   
    int n;
    printf("How many times do you want to print Hello World : ");
    scanf("%d",&n);
    while(n>0)
    {                                     //while(condition) {}
        printf("Hello World\n");
        n-=1;    
    }
    return 0;
}