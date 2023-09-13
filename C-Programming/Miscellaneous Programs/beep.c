#include<stdio.h>

void test()
{
    printf("\a");
    for(int i=2;i>0;i--)
    {
    for(int n = 20000;n>0;n--)
    {
        printf("Hello !\n");
    }
    printf("\a");
    for(int n = 20000;n>0;n--)
    {
        printf("World !\n");
    }
    printf("\a");
    for(int n = 20000;n>0;n--)
    {
        printf("Friends\n");
    }
    printf("\a");
    for(int n = 20000;n>0;n--)
    {
        printf("%d num\n",n);
        printf("\a");
    }
    printf("\nEnd of the loop.\n");
    }
}

int main()
{
    test();
    printf("\nEnd of the Program.\a");
    return 0;
}