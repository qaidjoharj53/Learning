#include<stdio.h>
int main()
{
	int Km, cm;
	printf("Distance(in Kms) between two cities : ");
	scanf("%d", &Km);
	cm=Km*100000;
	printf("Distance between two cities in centimeters : %d cms", cm);
	return 0;
}