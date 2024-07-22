#include<stdio.h>
int main()
{
    FILE *f1 = NULL;
    int num, n=0, p=0;
    f1 = fopen("p1.txt","r");
    while((fscanf(f1,"%d",&num)) != EOF)
    {
        if(num>=0)
        {
            p++;
        }
        else
        {
            n++;
        }
    }
    printf("\nNumber of positive numbers : %d",p);
    printf("\nNumber of negative numbers : %d",n);
    fclose(f1);

    return 0;
}