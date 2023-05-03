#include<stdio.h>
int main()
{
	int Km, mtr;
	printf("Distance(in Kms) between two cities : ");
	scanf("%d", &Km);
	mtr=Km*1000;
	printf("Distance between two cities in meters : %d mtrs", mtr);
	return 0;
}