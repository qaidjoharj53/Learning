#include<stdio.h>
int main()
{
    int n, sum=0;
    for(int i=1; i<=10; i++)
    {
        printf("Enter %d number : ", i);
        scanf("%d", &n);
        if(n>=0)
        {
            sum+=n;
        }
        else
        {
            i--;
            printf("Please enter a positive integer.\n");
            continue;
        }
    }
    printf("Sum of all the positive numbers is : %d", sum);

    return 0;
}