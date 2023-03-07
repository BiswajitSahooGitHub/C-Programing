#include<stdio.h>
int factorial(int *x)
{
    int fact=1,i;
    for(i=1;i<=(*x);i++)
    {
        fact=fact*i;
    }
    printf("The factorial of 5 is :%d",fact);
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int *p;
    p=&n;
    factorial(p);
}