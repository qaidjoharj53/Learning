#include<stdio.h>
int main()
{
    int val;
    printf("Enter any number : ");
    scanf("%d",&val);
        if(val%2==0)
        {
            printf("This is an even number.");
        }
        else if(val%2!=0)
        {
            printf("This is an odd number.");
        }
        else
        {
            printf("Wrong Input!!");
        }
    return 0;
}