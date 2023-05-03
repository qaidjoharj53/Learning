#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter length of 1st side of the triangle : ");
    scanf("%d",&a);
    printf("Enter length of 2nd side of the triangle : ");
    scanf("%d",&b);
    printf("Enter length of 3rd side of the triangle : ");
    scanf("%d",&c);
        if(a+b>c)
        {
            printf("The Triangle is Valid.");
        }
        else if(b+c>a)
        {
            printf("The Triangle is Valid.");
        }
        else if(a+c>b)
        {
            printf("The Triangle is Valid.");
        }
        else
        {
            printf("The Triangle is Not Valid.");
        }
    return 0;
}