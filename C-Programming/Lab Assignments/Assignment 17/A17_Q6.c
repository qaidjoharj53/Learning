#include<stdio.h>
int main()
{
    int n, sum=0, a;
    for(int i=1; i<=10; i++)
    {
        printf("Enter %d number : ",i);
        scanf("%d", &n);
        if(n==0 || n==1){sum+=n;}
        for(int j=2; j<n; j++)
        {
            if(n%j==0)
            {
                sum+=n;
                break;
            }
        }
    }

    printf("Sum of all the composite numbers is : %d",sum);

    return 0;
}