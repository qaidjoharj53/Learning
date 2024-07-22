#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=0; i<=10; i++)
    {
        if(i%2==0)
        {
            continue;
        }
        else
        {
            sum+=i;
        }
    }
    printf("Sum of all odd numbers from 0-10 is : %d", sum);

    return 0;
}