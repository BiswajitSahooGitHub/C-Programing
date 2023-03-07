#include<stdio.h>
int add(int *p,int *q)
{
    return *p+*q;
}
int main()
{
    int a=10,b=20;
    printf("Sum of two numbers: %d\n",add(&a,&b));
    return 0;
}