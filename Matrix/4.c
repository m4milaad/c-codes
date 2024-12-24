#include <stdio.h>

#define MAX 100

void multiplyMatrices(int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX], int r1, int c1, int r2, int c2)
{
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            c[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            for (int k = 0; k < c1; ++k)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void display(int c[MAX][MAX], int r, int col)
{
    printf("\nOutput Matrix:\n");
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            printf("%d  ", c[i][j]);
            if (j == col - 1)
                printf("\n");
        }
    }
}

int main()
{
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
    int r1, c1, r2, c2;

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    while (c1 != r2)
    {
        printf("Error! column of first matrix not equal to row of second.\n");

        printf("Enter rows and columns for the first matrix: ");
        scanf("%d %d", &r1, &c1);

        printf("Enter rows and columns for the second matrix: ");
        scanf("%d %d", &r2, &c2);
    }

    printf("\nEnter elements of matrix 1:\n");
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of matrix 2:\n");
    for (int i = 0; i < r2; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    multiplyMatrices(a, b, c, r1, c1, r2, c2);

    display(c, r1, c2);

    return 0;
}