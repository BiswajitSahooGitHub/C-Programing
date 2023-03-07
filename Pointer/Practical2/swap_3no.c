#include <stdio.h>
int swap(int *p, int *q, int *r)
{
    int temp;
    temp = (*p) * (*q) * (*r);
    *p = temp / ((*p) * (*q));
    *q = temp / ((*q) * (*r));
    *r = temp / ((*p) * (*q));
    return *p,*q,*r;
}
int main()
{
    int a = 5, b = 6, c=7;
    printf("Before swaping: %d\t%d\t%d\n", a, b,c);
    swap(&a,&b,&c);
    printf("After swaping:  %d\t%d\t%d\n",a,b,c);
    return 0;
}