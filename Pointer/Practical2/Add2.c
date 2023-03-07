#include <stdio.h>
int add(int *p, int *q)
{
    return *p + *q;
}
int main()
{
    int a = 5, b = 6;
    printf("Sum of two numbers: %d\n", add(&a, &b));
    return 0;
}