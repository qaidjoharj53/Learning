#include<stdio.h>
int main()
{
    int n;
    static int num=1;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++,num++)
        {
            printf("%d  ",num);
        }
        printf("%d\n",num);
        num++;
    }

    return 0;
}