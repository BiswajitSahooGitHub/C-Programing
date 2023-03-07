#include<stdio.h>
int main()
{
    int *p;
    char *a;
    float *b;
    double *c;
    long int *d;
    printf("%d\t",sizeof(p));
    printf("%d\t",sizeof(a));
    printf("%d\t",sizeof(b));
    printf("%d\t",sizeof(c));
    printf("%d\t",sizeof(d));
    return 0;
}