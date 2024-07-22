#include<stdio.h>
int main()
{
	int Km, mm;
	printf("Distance(in Kms) between two cities : ");
	scanf("%d", &Km);
	mm=Km*1000000;
	printf("Distance between two cities in millimeters : %d mms", mm);
	return 0;
}