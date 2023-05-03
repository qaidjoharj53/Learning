#include<stdio.h>
int main()
{
    int a,b,gn;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
        if(a>b)
        {
            gn==a;
        }
        else if(b>a)
        {
            gn==b;
        }
        else{}
//Checking if the value of the greatest number is between 500-1000.    
            if(gn>500 && gn<1000)
            {
                printf("Greatest number is %d",gn);
            }
            else
            {
                printf("\nTry Again!");
            }
    return 0;
}