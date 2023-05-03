#include<stdio.h>
int main()
{
    int ar1[10], ar2[10];
    printf("Enter values in array 1 :-\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &ar1[i]);
    }
    printf("\nValues in array 1 :-\n");
    for (int i = 0; i < 10; i++)
    {
        if(i==9){printf("%d", ar1[i]);}
        else{printf("%d, ", ar1[i]);} 
    }
    printf("\n\nValues in array 2 before copying :-\n");
    for (int i = 0; i < 10; i++)
    { //Garbage values printed.
        if(i==9){printf("%d", ar2[i]);}
        else{printf("%d, ", ar2[i]);}
    }
    for (int i = 0; i < 10; i++)
    { //Copying...
        ar2[i]=ar1[i];
    }
    printf("\n\nValues in array 2 after copying :-\n");
    for (int i = 0; i < 10; i++)
    {
        if(i==9){printf("%d", ar2[i]);}
        else{printf("%d, ", ar2[i]);} 
    }
    printf("\n");
    return 0;
}