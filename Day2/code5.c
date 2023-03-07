#include<stdio.h>
static int a=10;
int main()
{
    static int a=1;
    
    {
        static int a=2;
        {
            static int a=3;
            {
                printf("%d\t",&a);
            }printf("%d\t",&a);
        }printf("%d\t",&a);
    }

    printf("%d\t",&a);

}