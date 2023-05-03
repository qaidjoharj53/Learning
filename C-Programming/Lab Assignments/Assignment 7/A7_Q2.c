#include<stdio.h>
void add()
{
    int a,b;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    printf("The sum of two numbers : %d",a+b);
}
void subtract()
{
    int a,b;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    printf("The difference between two numbers : %d",a-b);
}
void multiply()
{
    int a,b;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    printf("The product of two numbers : %d",a*b);
}
void divide()
{
    int a,b;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    printf("The quotient of two numbers : %d",a/b);
}

int main()
{
    int ch;
    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("0. Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
            if(ch==1)
            {
                add();
            }
            else if(ch==2)
            {
                subtract();
            }
            else if(ch==3)
            {
                multiply();
            }
            else if(ch==4)
            {
                divide();
            }
            else if(ch==0)
            {
                printf("NO OPERATION");
            }
            else
            {
                printf("Wrong Input!!\nPlease choose from the above given options only.");
            }

    return 0;
}