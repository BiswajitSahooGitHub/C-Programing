#include<stdio.h>
int main()
{
    int a=10;
    printf("%d\t",a++);
    sizeof(a++);
    printf("%d",a);
    return 0;
}