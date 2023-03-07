#include<stdio.h>
#include<math.h>
float series(int x,int n)
{
    float sum=1;
    int i;
    for(i=1;i<n;i++)
    {
        sum=sum+(1.0/pow(x,i));
    }
    return sum;
}
int main()
{
    int x,n,i;
    float s;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter number of times ");
    scanf("%d",&n);
    s=series(x,n);
    printf("\nSum of the series: %.3f",s);
    return 0;
}