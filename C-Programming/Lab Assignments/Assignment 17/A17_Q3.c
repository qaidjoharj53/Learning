#include<stdio.h>
int main()
{
    int i, n, no[11];
    for(i=1; i<=10; i++)
    {
        printf("Enter %d number : ",i);
        scanf("%d", &n);
        if(n==10){break;}
        else
        {
            no[i]=n;
        }
    }
    
    printf("\nNatural numbers are : \n");
    
    for(int j=1; j<i; j++)
    {
        printf("%d\n", no[j]);
    }
    return 0;
}