#include<stdio.h>
int main()
{
    int n,unit,tenth;
    printf("Enter a number : ");
    scanf("%d",&n);
    unit = n%10;
    tenth = (n/10)%10;
    printf("\nDigit at one's place is %d",unit);
    printf("\nDigit at tenth place is %d",tenth);
    return 0;
}