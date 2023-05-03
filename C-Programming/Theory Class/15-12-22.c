#include<stdio.h>

void PrintArraySize(int a[])
{
    int size=0, *ptr;
    //find no. of elements.
    size = sizeof(a)/sizeof(a[0]);
    printf("%d\n", size);
    printf("%ld\n",sizeof(ptr));
}

int main()
{
    int a[5] = {10,20,30,40,50};
    int size=0;
    //find no. of element in array.
    size = sizeof(a)/sizeof(a[0]);
    printf("%d\n", size);
    PrintArraySize(a);
}