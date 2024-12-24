#include <stdio.h>

const int row = 3;
const int col = 3;

int sum(int mat[row][col]);

int main()
{
    int i, j;
    int mat[row][col];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter the %d %d element of the matrix: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatrix is:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nThe sum of the minors in the diagonal of this matrix is %d\n", sum(mat));

    return 0;
}

int sum(int mat[row][col])
{
    int sum = 0;
    sum += (mat[1][1] * mat[2][2]) - (mat[1][2] * mat[2][1]);
    sum += (mat[0][0] * mat[2][2]) - (mat[0][2] * mat[2][0]);
    sum += (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);
    return sum;
}

