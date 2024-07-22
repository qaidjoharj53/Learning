#include<stdio.h>

int main()
{
    int n,a;
    printf("\n\tM E N U\n");
    printf("1. Burger\n");
    printf("2. French Fries\n");
    printf("3. Pizza\n");
    printf("4. Sandwich\n\n");
    printf("Enter your choice : ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("How many burgers do you want? : ");
            scanf("%d",&a);
            printf("Total price of Burger(s) is : Rs.%d",a*200);
            break;

        case 2:
            printf("How many French Fries do you want? : ");
            scanf("%d",&a);
            printf("Total price of French Fries is : Rs.%d",a*50);
            break;

        case 3:
            printf("How many Pizza do you want? : ");
            scanf("%d",&a);
            printf("Total price of Pizza(s) is : Rs.%d",a*500);
            break;

        case 4:
            printf("How many Sandwich do you want? : ");
            scanf("%d",&a);
            printf("Total price of Sandwich(s) is : Rs.%d",a*150);
            break;
            
        case 5:
            printf("Enter a valid choice.");
            break;
        
        default:
            printf("Wrong Input!!");
    }
    return 0;
}