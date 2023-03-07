#include<stdio.h>
int main()
{
    int arr[30],i,n;
    int *p;
    printf("Enter no of elements in the array:\n");
    scanf("%d",&n);
    printf("Enter numbers:\n");
    for(i=0;i<n;i++)
    {
        printf("Element-%d: ",i);
        scanf("%d",&arr[i]);
        printf("\n");
    }
    p=&arr[0];
    for(i=0;i<n;i++)
    {
        printf("Element-%d: ",i);
        printf("%d\n",*(p+i));
    }
    return 0;
}