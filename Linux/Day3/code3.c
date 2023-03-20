#include<stdio.h>
int main()
{
	int radius;
	float area,perimeter;
	radius = 6;
	perimeter = 2*3.14*radius;
	printf("Perimeter of the circle = %.2f inches\n", perimeter);
	area = 3.14*radius*radius;
	printf("Area of the circle = %.2f square inches\n", area);
	return 0;
}
