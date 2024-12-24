#include <stdio.h>

int main()
{
    int row, col, n = 4;

    for (row = 1; row <= n; row++)
    {
        for (col = row; col < n; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
