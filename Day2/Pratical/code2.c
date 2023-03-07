#include<stdio.h>
int add(int a,int b)
{
    printf("Addition of two numbers = %d\n",a+b);
}
int sub(int a,int b)
{
    printf("Substration of two numbers = %d\n",a-b);
}
int mul(int a,int b)
{
    printf("Multiplication of two numbers = %d\n",a*b);
}
int div(int a,int b)
{
    printf("Division of two numbers = %d\n",a/b);
}
int main()
{
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d",&a); 
    scanf("%d",&b);
    add(a,b);
    sub(a,b);
    mul(a,b);
    div(a,b);
    return 0;   
}
