#include<stdio.h>
float AreaOfCircle(float);
int main()
{
    float area,n;
    printf("Enter Radius of Circle : ");
    scanf("%f",&n);
    area = AreaOfCircle(n);
    printf("Area of Circle is %.2f",area);
    return 0;
}

float AreaOfCircle(float r)
{
    return 3.14*(r*r);
}