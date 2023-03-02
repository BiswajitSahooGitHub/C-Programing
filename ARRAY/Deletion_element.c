#include<stdio.h>
int main()
{
    int n,a[40],i,j,ele;
    printf("\nEnter array size: ");
    scanf("%d",&n);
    printf("\nEnter %d Elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nElement before Deletion: ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nEnter Element To Delete: \n");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(ele==a[i])
        {
            for(j=i;j<n;j++)
            {
                a[j]=a[j+1];
            }n--;
        }
    }
     printf("\nElement after Deletion: ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}