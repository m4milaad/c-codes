#include <stdio.h>

int main()
{
    int n, i, j;
    int id = 1; 

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
            if (i == j)
            {
                if (a[i][j] != 1)
                {
                    id = 0;
                    break;
                }
            }
            else
            {
                if (a[i][j] != 0)
                {
                    id = 0;
                    break;
                }
            }
        }
        if (!id)
            break;
    }

    if (id)
    {
        printf("The matrix is an identity matrix.\n");
    }
    else
    {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}
