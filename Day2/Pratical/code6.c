#include<stdio.h>
int area(int a,int b)
{
    printf("\nArea: %d",a*b);
}
int perimeter(int a,int b)
{
    printf("\nPerimeter: %d",2*(a+b));
}
int main()
{
    int a,b;
    printf("Enter the length of the rectangle: ");
    scanf("%d",&a);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d",&b);
    area(a,b);
    perimeter(a,b);
    return 0;
}