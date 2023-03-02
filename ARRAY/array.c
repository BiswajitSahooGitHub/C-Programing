#include<stdio.h>
int  main()  
{  
    int arr[10],i;
    char ar[10];
    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter 10 characters:\n");
    for(i=0;i<10;i++)
    {
        scanf("%s",&ar[i]);
    }
    printf("Output in numeric :\n");
    for(i=0;i<10;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\nOutput in characters:\n");
    for(i=0;i<10;i++)
    {
        printf("%s",ar[i]);
    }
    return 0;
}