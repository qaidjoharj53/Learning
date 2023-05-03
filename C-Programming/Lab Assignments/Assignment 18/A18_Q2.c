#include<stdio.h>
int main()
{
    float sum=0, num[10], avg;
    for(int i=0; i<10; i++)
    {
        printf("Enter a number : ");
        scanf("%f", &num[i]);
        sum+=num[i];
    }
    avg = sum/10;
    printf("Average of the 10 numbers entered is : %.2f", avg);

    return 0;
}