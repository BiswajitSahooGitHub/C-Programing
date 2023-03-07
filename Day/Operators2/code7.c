#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first value:\n");
    scanf("%d",&a);
    printf("Enter the second value:\n");
    scanf("%d",&b);
    if(a>b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
        printf("a=%d , b=%d",a,b);
    }
    else
    {
        printf("No Swap");

    }
}