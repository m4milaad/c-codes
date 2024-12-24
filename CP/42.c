#include <stdio.h>

int main()
{
    unsigned long long b;
    int d = 0;
    int p = 1;
    int r;
    unsigned long long t;

    printf("Input a binary number: ");
    scanf("%llu", &b);

    for (t = b; t > 0; t /= 10)
    {
        r = t % 10;
        d += r * p;
        p *= 2;
    }

    printf("Decimal number equivalent to said binary number is: %d\n", d);

    return 0;
}
