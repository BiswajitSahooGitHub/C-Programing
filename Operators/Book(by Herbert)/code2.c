#include<stdio.h>
int xor(int a,int b)
{
    return (a || b) &&! (a && b);
}
int main(void)
{
    printf("%d\t",xor(1,0));
    printf("%d\t",xor(1,1));
    printf("%d\t",xor(0,1));
    printf("%d\t",xor(0,0));
    return 0;
}