#include<stdio.h> 
int main() 
{ 
    int n;
    printf("Enter an Integer : ");
    scanf("%d",&n);
    switch(n>0 | n<0)
    {
        case 1:
            n=n-n*2;
            printf("Converted value : %d",n);
            break;
            
        default:
            printf("Wrong Input!");
    }
    return 0;
 }