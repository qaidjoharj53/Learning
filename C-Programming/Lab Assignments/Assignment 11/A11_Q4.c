#include<stdio.h>
int main()
{   
    int n,i=1;
    printf("How many times do you want to print natural numbers : ");
    scanf("%d",&n);
    while(n>=i)
    {   
        printf("%d  ",i);
        i+=1;
    }         
    return 0;
}