
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 5;
    int r, c;

    for (c = 1; c <= n; c++)
    {
        for (r = n; r > c; r--)
        {
            printf(" ");
        }

        for (r = 1; r <= c; r++)
        {
            printf("1");
        }
        printf("\n");
    }

    return 0;
}