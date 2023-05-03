#include<stdio.h>
void naturalno()
{
    int s, num;
    printf("How many natural number do you want to print? : ");
    scanf("%d", &num);
    for(s=1;s<=num;s++)
    {
        printf("%d  ",s);
    }
}

int main()
{
    naturalno();
    return 0;
}