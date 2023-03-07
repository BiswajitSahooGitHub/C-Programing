#include<stdio.h>
int a=10;
int main()
{
    int a=20;
    printf("%d\t",&a);
    {
        int a=30;
        printf("%d\t",&a);
    }
    
    { 
        int a=40;
        printf("%d\t",&a);
    }
    printf("%d\t",&a);

}