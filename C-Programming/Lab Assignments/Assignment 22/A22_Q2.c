#include<stdio.h>
int findMax(int *ptr1, int *ptr2)
{
    int max = *ptr1 > *ptr2 ? *ptr1 : *ptr2 ;
    return max;
}

int main()
{
    int a, b;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    printf("The greater number is %d", findMax(&a, &b));

    return 0;
}