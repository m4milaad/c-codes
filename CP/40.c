#include <stdio.h>

int main()
{
    int n, i, j, k;
    char c;

    printf("Input number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("  ");
        }

        c = 'A';
        for (j = 1; j <= i; j++)
        {
            printf("%c ", c);
            c++;
        }

        c -= 2;
        for (k = 1; k < i; k++)
        {
            printf("%c ", c);
            c--;
        }

        printf("\n");
    }

    return 0;
}
