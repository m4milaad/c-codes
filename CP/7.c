#include <stdio.h>

int main()
{
    int n, s;

    printf("Enter the num(Table to be calculated): ");
    scanf("%d", &n);
    printf("Enter the numbe upto which you want the table: ");
    scanf("%d", &s);

    for (size_t i = 1; i <= s; i++)
    {
        printf("%d x %zu = %zu\n", n, i, n * i);
    }

    return 0;
}
