#include<stdio.h>
int main()
{
    FILE* f1;
    int n;
    f1 = fopen("prog2.txt", "w");
    if(f1 == NULL)
    {
        printf("File could not be opened!\n");
        return 0;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &n);
        putw(n,f1);
    }
    fclose(f1);
}