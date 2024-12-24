#include <stdio.h>

int main()
{
    int r, c, i, j;
    int zeroCount = 0;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
            {
                zeroCount++;
            }
        }
    }

    int totalElements = r * c;
    if (zeroCount > totalElements / 2)
    {
        printf("The matrix is a sparse matrix.\n");
    }
    else
    {
        printf("The matrix is not a sparse matrix.\n");
    }

    return 0;
}
