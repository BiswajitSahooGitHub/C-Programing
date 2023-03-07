#include<stdio.h>
int main()
{
    int a=5,b=6;
    int *c,*d;
    c=&a;
    d=&b;
    if(*c>*d)
    {
        printf("%d is the maximum number",*c);
    }
    else{
        printf("%d is the maximum number",*d);
    }
}