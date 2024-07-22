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
        if(a==b && b==c && a==c)
        {
            printf("This is an Equilateral Triangle.");
        }
        else if(a==b && b!=c || b==c && c!=a || a==c && a!=b)
        {
           printf("This is an Isosceles Triangle.");
        }
        else if(a!=b && b!=c && a!=c)
        {
           printf("This is an Scalene Triangle.");
        }

    return 0;
}