#include<stdio.h>
int main()
{
	int F, C;
	printf("Temperature in Fahrenheit : ");
	scanf("%d", &F);
	C = (F - 32) * 5/9;
	printf("Temperature in Centigrade : %d",C);
	return 0;
}