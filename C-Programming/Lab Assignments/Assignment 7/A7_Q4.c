#include<stdio.h>
int main()
{
    int val;
    printf("Enter any number : ");
    scanf("%d",&val);
        if(val>10)
        {
            printf("The value is greater than 10.");
        }
        else if(val<10)
        {
            printf("The value is less than 10.");
        }
        else
        {
            printf("Wrong Input!!");
        }
    return 0;
}