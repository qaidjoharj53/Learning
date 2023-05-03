#include<stdio.h>
int main()
{
    int n;
    int num=65;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf("%c  ",num);
        }
        printf("%c\n",num);
        num++;
    }

    return 0;
}