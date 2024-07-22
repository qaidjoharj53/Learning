#include<stdio.h>

void swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int n1, n2;
    printf("Enter 1st number : ");
    scanf("%d", &n1);
    printf("Enter 2nd number : ");
    scanf("%d", &n2);
    printf("\nOriginal Values:\na = %d   ;   b = %d", n1, n2);
    swap(&n1, &n2);
    printf("\nSwapped Values:\na = %d   ;   b = %d", n1, n2);
    return 0;
}