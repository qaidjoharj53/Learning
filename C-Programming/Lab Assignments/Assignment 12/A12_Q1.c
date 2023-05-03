#include<stdio.h>
int main()
{
    int a, i;
    printf("How many times do you want to type hello world? : ");
    scanf("%d",&a);
    for (i=0; i<a; i++)
    {
        printf("Hello World\n");
    }
    return 0;
}