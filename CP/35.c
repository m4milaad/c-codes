#include <stdio.h>

int main()
{
    unsigned int a = 0, b = 1, sum, n, count = 1;

    printf("Enter the number: ");
    scanf("%u", &n);

    if (n > 0)
    {
        printf("%u: %u\n", count, a);
        count++;
    }

    if (n > 2)
    {
        printf("%u: %u\n", count, b);
        count++;
    }
    while (count <= n)
    {
        sum = a + b;
        printf("%u: %u\n", count, sum);
        a = b;
        b = sum;
        count++;
    }

    return 0;
}