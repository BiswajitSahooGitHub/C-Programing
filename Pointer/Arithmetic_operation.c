#include<stdio.h>
int add(int *p,int *q)
{
    return *p+*q;
}
int sub(int *p,int *q)
{
    return *p-*q;
}
int mul(int *p,int *q)
{
    return *p * *q;
}
float div(float *r,float *t)
{
    return *r / *t;
}
int main()
{
    int a=10,b=20;
    float c=10,d=5;
    printf("Addition of two numbers: %d\n",add(&a,&b));
    printf("Subtraction of two numbers: %d\n",sub(&a,&b));
    printf("Multiplication of two numbers: %d\n",mul(&a,&b));
    printf("Division of two numbers: %d\n",div(&c,&d));
    return 0;
}