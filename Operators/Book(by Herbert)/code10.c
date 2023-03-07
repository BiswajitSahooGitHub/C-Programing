#include<stdio.h>
int main(void)
{
    int i;
    for(i=1;i<=100;++i)
    {
        printf("%d/2 is: %.2f\n",i ,(float)i/2);
    }
    return 0;
}