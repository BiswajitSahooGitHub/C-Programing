#include<stdio.h>
int w,h,area,perimeter;
int main()
{
	h=7;
	w=5;
	perimeter = 2*(h + w);
	printf("Perimeter of the rectangle = %d inches\n", perimeter);
	area = h*w;
	printf("Area of the rectangle = %d inches\n", area);
	return 0;
}
