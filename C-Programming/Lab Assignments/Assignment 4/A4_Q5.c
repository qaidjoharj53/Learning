#include<stdio.h>
int main()
{
	int salary, da, ts;
	printf("Write your basic salary : ");
	scanf("%d", & salary);
	da=salary*0.4;
	ts=da+salary;
	printf("Your total salary : %d",ts);
	return 0;
}