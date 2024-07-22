#include<stdio.h>
int main()
{
    int salary, da, hr;
    printf("Aman's basic salary : ");
    scanf("%d", &salary);
    da = salary*0.5;
    hr = salary*0.2;
    salary = da+hr;
    printf("Aman's gross(total) salary : %d",salary);
    return 0;
}