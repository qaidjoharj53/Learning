#include<stdio.h>
int main()
{
    FILE* f1;
    int num, sum=0;
    f1 = fopen("prog2.txt", "r");
    if(f1 == NULL)
    {
        printf("File could not be opened!");
        return 0;
    }
    while ((num = getw(f1)) != EOF)
    {
        printf("Number read from file is : %d\n",num);
        sum += num;
    }
    printf("Sum of numbers read from file is : %d", sum);
    fclose(f1);
}    