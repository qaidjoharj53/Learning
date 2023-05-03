#include<stdio.h>
void IsoT();
void RaT();
void EquiT();
int main()
{
    int n;
    printf("\n\tM E N U\n\n");
    printf("1. Checking Isosceles Triangle\n");
    printf("2. Checking Right Angled Triangle\n");
    printf("3. Checking Equilateral Triangle\n");
    printf("4. Exit\n\n");
    printf("Enter your choice : ");
    scanf("%d",&n);
    switch (n)
    {
        case 1:
            IsoT(1,2,3); break;
            
        case 2:
            RaT(1,2,3); break;
            
        case 3:
            EquiT(1,2,3); break;

        case 4:
            break;
        
        default:
            printf("Choose from the options given in menu only.");
    }
    return 0;
}

void IsoT(int a,int b,int c)
{
    printf("Enter length of 1st side of the triangle : ");
    scanf("%d",&a);
    printf("Enter length of 2nd side of the triangle : ");
    scanf("%d",&b);
    printf("Enter length of 3rd side of the triangle : ");
    scanf("%d",&c);
    if(a==b && b!=c || b==c && c!=a || a==c && a!=b)
        {
           printf("This is an Isosceles Triangle.");
        }
    else
    {
        printf("This is not an Isosceles Triangle.");
    }
}
void RaT(int a,int b,int c)
{
    printf("Enter length of 1st side of the triangle : ");
    scanf("%d",&a);
    printf("Enter length of 2nd side of the triangle : ");
    scanf("%d",&b);
    printf("Enter length of 3rd side of the triangle : ");
    scanf("%d",&c);
    if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b)
        {
            printf("This is a Right Angled Triangle.");
        }
    else
    {
        printf("This is not a Right Angled Triangle.");
    }
}
void EquiT(int a,int b,int c)
{
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
    else
    {
        printf("This is not an Equilateral Triangle.");
    }
}