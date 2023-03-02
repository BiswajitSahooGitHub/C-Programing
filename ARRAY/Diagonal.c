#include <stdio.h>
#include <conio.h>
void main()
{
    int a[3][3],m=3,n=3, i, j;
    printf("ENTER VALUES FOR MATRIX A:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nThe Diagonals elements of a matrix are :: \n\n");
    if (m == n)
    {

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {

                if (i == j)
                    printf("\t%d", a[i][j]);
                else
                    printf("\t");
            }
            printf("\n\n");
        }
    }
    else
    {
        printf("\nMatrix is not a Square Matrix.");
    }
    getch();
}