#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter element a%d%d", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Lower Triangular Matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i >= j)
            {
                printf("%d ", a[i][j]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
