#include<stdio.h>
int main()
{
    char c = l;
    printf("%c\n", encoder(c));
}
char encoder(char ch)
{
    return(~ch);
}