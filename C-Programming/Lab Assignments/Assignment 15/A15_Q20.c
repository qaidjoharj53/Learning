#include<stdio.h>

int facto();
int sumofseries();

int main()
{
    float sums = sumofseries();
    printf("Given Series : 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5\n");
    printf("\nSum of the series is : %.2f", sums);
    return 0;
}

int Facto(int n)
{
    int a=1;
    for(int i=1;i<=n;i++)
    {
        a = a*i;
    }
    return a;
}

int sumofseries()
{
    float sum=0;
    for(int i=1; i<=5; i++)
    {
        sum += Facto(i)/i;
    }
    return sum;
}