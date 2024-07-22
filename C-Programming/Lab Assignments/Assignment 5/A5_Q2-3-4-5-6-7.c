#include<stdio.h>
void Rectangle()
{
	int l, b, Rarea, Rperi;
	printf("Enter Length of Rectangle : ");
	scanf("%d", &l);
	printf("Enter Breadth of Rectangle : ");
	scanf("%d", &b);
	Rarea = l*b;
	Rperi = 2*(l+b);
	printf("\nArea of Rectangle is : %d", Rarea);
	printf("\nPerimeter of Rectangle is : %d", Rperi);
}
void Square()
{
	int side, Sarea, Speri;
	printf("Enter Side of Square : ");
	scanf("%d", &side);
	Sarea = side*side;
	Speri = 4*side;
	printf("\nArea of Rectangle is : %d", Sarea);
	printf("\nPerimeter of Rectangle is : %d", Speri);
}
void Circle()
{
	int r, Carea, Ccrm;
	printf("Enter Radius of Circle : ");
	scanf("%d", &r);
	Carea = 3.14*r*r;
	Ccrm = 2*3.14*r;
	printf("\nArea of Circle is : %d", Carea);
	printf("\nCircumference of Circle is : %d \n\n", Ccrm);
}

int main()
{
	printf("\n========================================\nFinding Area and Perimeter of Rectangle\n========================================\n\n");
	Rectangle(); //Function Call
	printf("\n\n=====================================\nFinding Area and Perimeter of Square\n=====================================\n\n");
	Square(); //Function Call
	printf("\n\n==========================================\nFinding Area and Circumferencwe of Circle\n==========================================\n\n");
	Circle(); //function call
	return 0;
}

