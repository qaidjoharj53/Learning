#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    printf("Enter 3rd number : ");
    scanf("%d", &c);
        if(a>b && a>c)
        {
            printf("\nGreatest number is %d",a);
        }
        else if(b>a && b>c)
        {
            printf("\nGreatest number is %d",b);
        }
        else if(c>a && c>b)
        {
            printf("\nGreatest number is %d",c);
        }
        else
        {
            printf("\nIncorrect Input!!");
            printf("\nPlease type three different integers only.");
        }
    return 0;
}