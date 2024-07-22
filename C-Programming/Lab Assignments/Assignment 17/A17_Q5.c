#include<stdio.h>
int main()
{
    int i, n, no[100];
    for(i=0; ; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &n);
        if(n==0){break;}
        else
        {
            no[i]=n;
        }
    }
    
    printf("Numbers entered are : \n");
    
    for(int j=0; j<i; j++)
    {
        printf("%d\n", no[j]);
    }

    return 0;
}