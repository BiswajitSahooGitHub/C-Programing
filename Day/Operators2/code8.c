#include<stdio.h>
int main()
{
    int Mon,Tue,Wed;
    printf("Enter the Temperature in Monday:\n");
    scanf("%d",&Mon);
    printf("Enter the Temperature in Tuesday:\n");
    scanf("%d",&Tue);
    printf("Enter the Temperature in Wednesday:\n");
    scanf("%d",&Wed);
    if(Mon == Wed)
    {
        printf("The Temperature of Monday is same as Wednesday\n");
    }
    else if(Mon == Tue)
    {
        printf("The Temperature of Monday is same as Tuesday\n");
    }
    else if(Tue == Wed)
    {
        printf("The Temperature of Tuesday is same as Wednesday\n");
    }
    return 0;
}