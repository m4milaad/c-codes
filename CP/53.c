#include <stdio.h>

int main()
{
    long long b, t;
    int d = 0, i = 1, r;

    printf("Input the binary number: ");
    scanf("%lld", &b);

    t = b;
    while (t != 0)
    {
        r = t % 10;
        t /= 10;
        d += r * i;
        i *= 2;
    }

    printf("The Binary Number: %lld\n", b);
    printf("The equivalent Octal Number is: %o\n", d);

    return 0;
}
