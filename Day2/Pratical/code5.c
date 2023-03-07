#include<stdio.h>
void power(int,int,int);
void main()
{
 int x,y,z;
 printf("Enter value of x: ");
 scanf("%d",&x);
 printf("Enter value of y: ");
 scanf("%d",&y);
 printf("Enter value of z: ");
 scanf("%d",&z);
 power(x,y,z);
}
void power(int x,int y, int z)
{
 int ans = 1, i;
 for(i = 1; i <= (y+z); i++)
 {
    ans *= x;
 }
 printf("%d ^ (%d+%d) = %d",x,y,z,ans);
}