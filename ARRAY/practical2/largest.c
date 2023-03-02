#include <stdio.h>
int main()
{
    int arr[30];
    int i,N, small, large;
    printf("\n Enter the Size of an Array : \t");
    scanf("%d", &N);

    printf("Please Enter the Array Elements\t");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    small = arr[0];
    large = arr[0];
    for (i = 1; i < N; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    printf("Largest element is : %d\n", large);
    printf("Smallest element is : %d\n", small);
    return 0;
}