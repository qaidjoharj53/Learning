#include<stdio.h>
int main()
{
	int feet, inch;
	printf("Your height in feet : ");
	scanf("%d", &feet);
	inch=feet*12;
	printf("Your height in inch : %d", inch);
	return 0;
}