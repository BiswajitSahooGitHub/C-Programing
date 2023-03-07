#include<stdio.h>
int ar(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        *(p+i)=(*(p+i)+4)-(*(p+i)+2);
    }
}
int main()
{
    int a[8];
    int *p;
    p=&a;
    int i;
    printf("Enter the array elements of size 8: ");
    for(i=0;i<8;i++)
    {
        scanf("%d",&a[i]);
        printf("\t");
    }
    printf("\n");
    ar(p,8);
    printf("Result: ");
    for(i=0;i<8;i++)
    {
        printf("%x\t",*p);
    }
    return 0;
}