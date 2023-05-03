//1.Take 10 natural nos. and print their sum.
//2.Find the smallest element of an array.
//3.Find the largest element of an array.
#include<stdio.h>
int a[10];
int main()
{
    int sum=0;
    for(int i=0;i<10;i++)
    {
        printf("Enter a number : ");
        scanf("%d",& a[i]);
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}