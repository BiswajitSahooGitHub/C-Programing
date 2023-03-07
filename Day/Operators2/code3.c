#include<stdio.h>
int main()
{
    int a,b,c,greatest;
    printf("Enter the value of a,b,c\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    greatest = a>b ?(a>c?a:c):(b>c?b:c);
    printf("The greatest value between %d, %d, %d is %d",a,b,c,greatest);
    return 0;
}