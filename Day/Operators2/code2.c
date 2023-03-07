#include<stdio.h>
int main()
{
    int a,b,greatest;
    printf("Enter the value of a,b\n");
    scanf("%d",&a);
    scanf("%d",&b);
    greatest = a>b ? a:b;
    printf("The greatest value between %d and %d is %d",a,b,greatest);
    return 0;
}