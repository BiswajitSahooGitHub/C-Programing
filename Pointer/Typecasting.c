#include<stdio.h>
int main()
{
    int a=100;
    char e='s';
    float w=1.65;
    void *p,*o;
    void *c;
    p = &a;
    c = &e;
    o = &w;
    printf("Value of original variable: %d \n",*(int*)p);
    printf("Value of original variable: %c \n",*(char*)c);
    printf("Value of original variable: %f \n",*(float*)o);
    return 0;
}