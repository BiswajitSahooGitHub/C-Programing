#include<stdio.h>
int main()
{
    int a=10,b=6,result;
    result=(a>b) && a++;
    printf("%d\n",result);
    printf("%d\n",a);
    return 0;
}