/*WAP swaping of two numbers without use of third viarable*/

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first variable:  \n");
    scanf("%d",&a);
    printf("Enter the second variable:  \n");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swaping variables are a = %d and b = %d\n",a ,b);
}