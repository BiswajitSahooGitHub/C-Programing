#include<stdio.h>
int main()
{
    int i = 5;
    int a = --i + --i + --i;
    printf("%d\n",a);
    return 0;
}