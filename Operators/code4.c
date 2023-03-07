#include<stdio.h>
int main()
{
    int i = 8;
    int a = ++i + ++i + ++i + ++i;
    printf("%d\n",a);
    return 0;
}