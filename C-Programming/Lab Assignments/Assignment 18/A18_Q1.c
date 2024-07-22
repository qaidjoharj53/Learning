#include<stdio.h>
int main()
{
    int sum=0, num[10];
    for(int i=0; i<10; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &num[i]);
        sum+=num[i];
    }
    printf("Sum of the 10 numbers entered is : %d", sum);

    return 0;
}