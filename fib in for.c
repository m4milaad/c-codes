#include <stdio.h>

int main()
{
    unsigned int a = 0, b = 1, sum = 0, n;

    printf("Enter the number: ");
    scanf("%u", &n);

    if (n >= 0)
    {
        printf("%u\n", a);
    }

    for (; b <= n; sum = a + b, a = b, b = sum)
    {
        printf("%u\n", b);
    }

    return 0;
}