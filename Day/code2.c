#include<stdio.h>
int main()
{
    int a,b,c,largest;
    printf("Enter the value of a,b,c\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    largest = a>b ?(a>c?a:c):(b>c?b:c);
    printf("The greatest value between %d, %d, %d is %d",a,b,c,largest);
    return 0;
}