#include<stdio.h>
void count(int n)
{
    static int d=1;
    printf("%d\t",n);
    printf("%d\t",d);
    d++;
    if(n>1)
    {
        count(n-1);
    }
    printf("%d\t",d);
}
int main()
{
    count(3);
    return 0;
}