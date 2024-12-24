#include <stdio.h>

int main()
{
    int a, b, c, space;

    printf("Input number of rows: ");
    scanf("%d", &a);

    for (b = 1; b <= a; b++)
    {
        for (space = 1; space <= a - b; space++)
        {
            printf(" ");
        }

        for (c = 1; c <= b; c++)
        {
            printf("%d", c);
        }

        for (c = b - 1; c >= 1; c--)
        {
            printf("%d", c);
        }

        printf("\n");
    }

    return 0;
}
