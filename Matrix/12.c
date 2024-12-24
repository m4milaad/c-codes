#include <stdio.h>

int main()
{
    int n, i, j;
    int sum = 0;

    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i <= j)
            {
                sum += a[i][j];
            }
        }
    }

    printf("Sum of the upper triangular matrix: %d\n", sum);

    return 0;
}
