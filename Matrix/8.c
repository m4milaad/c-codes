#include <stdio.h>
const int row = 3;
const int col = 3;

int main()
{
    int i, j, sum = 0;
    int matrix[row][col];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter the element of matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0, sum = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sum += matrix[i][j];
        }

 printf("Sum of row %d is %d\n", i, sum);
    }

    for (j = 0, sum = 0; j < col; j++)
    {
        for (i = 0; i < row; i++)
        {
            sum += matrix[i][j];
        }
        printf("Sum of colomn %d is %d\n", j, sum);
    }

    return 0;
}