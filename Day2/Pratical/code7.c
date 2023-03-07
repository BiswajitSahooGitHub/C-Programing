#include<stdio.h>
void power(int,int);
void main()
{
 int x,y,z;
 printf("Enter value of x: ");
 scanf("%d",&x);
 printf("Enter value of y: ");
 scanf("%d",&y);
 power(x,y);
}
void power(int x,int y)
{
 int ans = 1, i;
 for(i = 1; i <= y; i++)
 {
    ans *= x;
 }
 printf("%d ^ %d = %d",x,y,ans);
}