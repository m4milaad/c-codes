#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the size of the matrix (2 or 3): ");
    scanf("%d", &n);

    if (n == 2)
    {
        int a[2][2];
        int det;

        printf("Enter the elements of the 2x2 matrix:\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        det = a[0][0] * a[1][1] - a[0][1] * a[1][0];

        printf("Determinant of the 2x2 matrix: %d\n", det);
    }
    else if (n == 3)
    {
        int a[3][3];
        int det;

        printf("Enter the elements of the 3x3 matrix:\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        det = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1]) - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]) + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);

        printf("Determinant of the 3x3 matrix: %d\n", det);
    }
    else
    {
        printf("This program only handles 2x2 and 3x3 matrices.\n");
    }

    return 0;
}
