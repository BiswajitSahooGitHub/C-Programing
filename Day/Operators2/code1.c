#include<stdio.h>
int main()
{
    int a=20;
    int b=10,c;
    a=(b=20,c=30,50);
    printf("%d\n",a);
    return 0;

}