#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first value:\n");
    scanf("%d",&a);
    printf("Enter the second value:\n");
    scanf("%d",&b);
    printf("%d",sizeof(a%b)?b:a);
}