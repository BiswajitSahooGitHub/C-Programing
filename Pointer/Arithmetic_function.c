#include<stdio.h>
int add(int p,int q)
{
    return p+q;
}
int sub(int p,int q)
{
    return p-q;
}
int mul(int p,int q)
{
    return p * q;
}
float div(float r,float t)
{
    return r / t;
}
int main()
{
    int a=10,b=20,result;
    float c=10,d=5,g;
    int (*func)(int,int);
    func = &add;
    result =(*func)(10,20);
    printf("Addition of two numbers: %d\n",result);
    func = &sub;
    result =(*func)(10,20);
    printf("Subtraction of two numbers: %d\n",result);
    func = &mul;
    result =(*func)(10,20);
    printf("Multiplication of two numbers: %d\n",result);
    func = &div;
    g =(*func)(c,d);
    printf("Division of two numbers: %f\n",g);
    return 0;
}