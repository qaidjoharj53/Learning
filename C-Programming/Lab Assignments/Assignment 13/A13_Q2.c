#include<stdio.h>

void Add();
void Subtract();
void Multiply();
void Divide();

int main()
{
    int n; char c='y';
    while(c=='y')
    {
        printf("\t\tArithmetic Operations\n\n");
        printf("\t1. Addition\n");
        printf("\t2. Subtraction\n");
        printf("\t3. Multiplication\n");
        printf("\t4. Division\n");
        printf("\t5. Exit\n\n");
        printf("Enter your choice : ");
        scanf("%d",&n);
        switch(n)
        {
            case 1: Add();break;
            case 2: Subtract();break;
            case 3: Multiply();break;
            case 4: Divide();break;
            case 5: break;break;
            default: printf("Wrong Input!!");
        }
        if(n==5)
        {
            break;
        }
        printf("Do you want to continue?(y/n) : ");
        scanf("%s",&c);
        
    }
}

void Add()
{
    int a, b;
    printf("Enter 1st number : ");
    scanf("%d", & a);
    printf("Enter 2nd number : ");
    scanf("%d", & b);
    printf("\nSum of two numbers is : %d\n\n",a+b);
}
void Subtract()
{
    int a,b;
    printf("Enter 1st number : ");
    scanf("%d", & a);
    printf("Enter 2nd number : ");
    scanf("%d", & b);
    printf("\nDifference between two numbers : %d\n\n",a-b);
}
void Multiply()
{
    int a,b;
    printf("Enter 1st number : ");
    scanf("%d", & a);
    printf("Enter 2nd number : ");
    scanf("%d", & b);
    printf("\nProduct of two numbers : %d\n\n",a*b);
}
void Divide()
{
    float a,b;
    printf("Enter 1st number : ");
    scanf("%f", & a);
    printf("Enter 2nd number : ");
    scanf("%f", & b);
    printf("\nDivision of two numbers : %.2f\n\n",a/b);
}