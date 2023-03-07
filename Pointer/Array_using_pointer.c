#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10};
    int *p;
    p = &a;
    for (int i = 0; i < 10; i++)
    {
        printf("Value of %d from %p\n", a[i], &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", *(p + i));
    }
    printf("\n");
    return 0;
}