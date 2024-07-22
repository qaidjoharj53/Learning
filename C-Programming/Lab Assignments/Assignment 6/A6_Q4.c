#include<stdio.h>
void cm()
{
	int Km;
	printf("Distance between two cities(in Kms) : ");
	scanf("%d", &Km);
    printf("\nDistance between two cities in centimeters : %d cm\n\n", Km*100000);
}
void mm()
{
    int Km;
    printf("Distance between two cities in millimeters : %d mm\n\n", Km*1000000);
}
void inch()
{
    int Km;
    printf("Distance between two cities in inches : %.1f inch\n\n", Km*39370.1);
}

int main()
{
    cm();
    mm();
    inch();
	return 0;
}