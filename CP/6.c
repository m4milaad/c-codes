#include <stdio.h>

int main()
{
    int n;

    printf("Enter the num(Table to be calculated): ");
    scanf("%d", &n);

    for (size_t i = 1; i < 11; i++)
    {
        printf("%d x %zu = %zu\n", n, i, n * i);
    }

    return 0;
}
