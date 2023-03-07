#include<stdio.h>
void hi(static int i)
{
    printf("%d",i);
}
int main()
{
    int f=6;
    hi(f);
}