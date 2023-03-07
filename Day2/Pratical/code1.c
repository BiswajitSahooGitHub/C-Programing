#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
int main()
{
    int a,b;
    printf("Enter the value of a abd b\n");
    scanf("%d",&a); 
    scanf("%d",&b);
    printf("Addition of two numbers = %d\n",add(a,b));
    printf("Substration of two numbers = %d\n",sub(a,b));
    printf("Multiplication of two numbers = %d\n",mul(a,b));
    printf("Division of two numbers = %d\n",div(a,b));
    return 0;   
}
