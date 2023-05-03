#include<stdio.h>
int main()
{
    int esum=0, osum=0, num[10];
    for(int i=0; i<10; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &num[i]);
        if(num[i]%2==0)
        {
            esum+=num[i];
        }
        else
        {
            osum+=num[i];
        }
        
    }
    printf("\nSum of all the even numbers entered is : %d\n", esum);
    printf("Sum of all the odd numbers entered is : %d", osum);

    return 0;
}