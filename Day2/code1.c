#include<stdio.h>
int counter(){
    static int count = 0;
    count++;
    printf("%d",count);
}
int main()
{
    counter();
    counter();
    counter();
    counter();
    counter();
    counter();
    return 0;
}