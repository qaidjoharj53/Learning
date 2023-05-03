#include<stdio.h>
int main()
{
    FILE* f1;
    int a,b,c;
    printf("Enter 3 integers : ");
    scanf("%d %d %d", &a,&b,&c);
    f1 = fopen("prog1.txt", "w");
    if(f1 == NULL)
    {
        printf("File could not be opened!");
        return 0;
    }
    fprintf(f1, "%d  %d  %d\n", a, b,c);
    fclose(f1);

    return 0;
}