#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a,b\n");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a%b == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    return 0;
}