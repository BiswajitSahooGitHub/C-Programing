#include <stdio.h>
int main()
{
    int n, sum = 0;
    int *p;
    printf("Enter the no. of elements to store: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nenter the values:");
        scanf("%d", &arr[i]);
    }
    p = &arr[0];
    for (int i = 0; i < n; i++)
    {
        sum = sum + (*p + i);
    }
    printf("the sum of array is:%d", sum);
}