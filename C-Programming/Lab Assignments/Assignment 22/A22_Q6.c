#include<stdio.h>
void rev();
int main()
{
    int n;
 
    printf("How many elements you want to enter? : ");
    scanf("%d", &n);
    int s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &s[i]);
    }
 
    rev(s, n);

    return 0;
}

void rev(int* ptr, int n)
{
    ptr+=n-1;
    printf("Elements in reverse order: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *ptr);
        ptr--;
    }
}