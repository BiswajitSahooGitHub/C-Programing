#include<stdio.h>
int main()
{
    int Size, i, a[10];

    printf("\n Enter the Size of an Array : \t");
    scanf("%d", &Size);

    printf("Please Enter the Array Elements\t");
    for (i = 0; i < Size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nOdd elements are: ");
    for (i = 0; i < Size; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("%d\t",a[i]);
        }
    }
    return 0;
}