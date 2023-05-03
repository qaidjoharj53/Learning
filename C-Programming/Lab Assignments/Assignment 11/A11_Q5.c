#include<stdio.h>
int main()
{   
    int n,a,b;
    printf("How many times do you want to add no. of pairs : ");
    scanf("%d",&n);
    while(n>0)
    {
        printf("\n\nEnter 1st number : ");
        scanf("%d",&a);
        printf("Enter 2nd number : ");
        scanf("%d",&b);
        printf("Sum of two numbers given : %d",a+b);
        n-=1;    
    }
    return 0;
}