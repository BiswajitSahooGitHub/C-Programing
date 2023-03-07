#include <stdio.h>
int swap(int *p, int *q)
{
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
    return *p,*q;
}
int main()
{
    int a = 10, b = 20;
    printf("Before swaping: %d\t%d\n", a, b);
    swap(&a,&b);
    printf("After swaping:  %d\t%d\n",a,b);
    return 0;
}