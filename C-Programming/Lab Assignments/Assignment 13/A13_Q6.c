#include<stdio.h>
int main()
{
    int var;
    printf("\n\tYour Percentage\n\n");
    printf("1. Between 60-75 %\n");
    printf("2. Between 75-90 %\n");
    printf("3. More than 90 %\n\n");
    printf("Enter your choice : ");
    scanf("%d", &var);
    switch(var)
    {
        case 1:
            printf("good");
            break;
            
        case 2:
            printf("better");
            break;
            
        case 3:
            printf("best");
            break;
            
        default:
            printf("invalid");
    }
    return 0;
}