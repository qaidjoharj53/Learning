#include<stdio.h>
int main()
{
    int i, n, no[11];
    for(i=1; i<=10; i++)
    {
        printf("Enter %d number : ",i);
        scanf("%d", &n);
        
        no[i]=n;
    }
    
    printf("\nNatural numbers are : \n");
    
    for(int j=1; j<i; j++)
    {
        if(no[j]==10){continue;}
        
        printf("%d\n", no[j]);
    }
    return 0;
}