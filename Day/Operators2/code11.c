#include<stdio.h>

int main()

{
    int p = 5, q = 5, r = 10;
    printf("%d == %d is %d \n", p, r, p == r);

    printf("%d == %d is %d \n", p, q, p == q);

    printf("%d > %d is %d \n", p, r, p > r);

    printf("%d > %d is %d \n", p, q, p > q);

    printf("%d < %d is %d \n", p, r, p < r);

    printf("%d < %d is %d \n", p, q, p < q);

    printf("%d != %d is %d \n", p, r, p != r);

    printf("%d != %d is %d \n", p, q, p != q);

    printf("%d >= %d is %d \n", p, r, p >= r);

    printf("%d >= %d is %d \n", p, q, p >= q);

    printf("%d <= %d is %d \n", p, r, p <= r);

    printf("%d <= %d is %d \n", p, q, p <= q);

    return 0;

}