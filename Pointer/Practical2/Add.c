#include <stdio.h>
int main()
{
    int a = 5, b = 6;
    int *c, *d;
    c = &a;
    d = &b;
    printf("Sum of two numbers: %d\n", *c + *d);
    return 0;
}