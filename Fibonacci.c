#include <stdio.h>

int main()
{
    unsigned int a = 0, b = 1, sum, n;

    printf("Enter the number: ");
    scanf("%u", &n);

    if (n >= 0)
    {
        printf("%u\n", a);
    }

    if (n > 0)
    {
        printf("%u\n", b);
    }
    do
    {
        sum = a + b;
        if (sum <= n)
        {
            printf("%u\n", sum);
        }
        a = b;
        b = sum;
    } while (sum <= n);

    return 0;
}