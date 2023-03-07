#include<stdio.h>
void fac()
{
    int n,res=0,j,fac=1;
    scanf("%d",&n);
    for (int i=1 ;i<=n;i++)
    {
        j=i;
        while(j>0)
        {
            fac=fac*j;
            j--;
        }
        res=res+(fac/i);
    }
    printf("%d",res);
}
int main()
{
    fac();
    return 0;
}