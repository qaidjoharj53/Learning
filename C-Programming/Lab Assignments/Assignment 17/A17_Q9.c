#include<stdio.h>
int main()
{
    int i, n, no[100];
    for(i=0; ;)
    {
        printf("Enter a number : ");
        scanf("%d", &n);
        if(n==0){break;}
        else if(n%10==0){continue;}
        else
        {
            no[i]=n;
        }
        i++;
    }
    
    printf("Numbers entered are : \n");
    
    for(int j=0; j<i; j++)
    {
        printf("%d\n", no[j]);
    }

    return 0;
}