#include<stdio.h>
char s[80];
int main(void)
{
    s[3] = 'X';
    printf("%c\n",s[3]);
    return 0;
}