#include <stdio.h>

int main()
{
    unsigned long long int fac, n;

    printf("Enter the number: ");
    scanf("%llu", &n);

    for (fac = 1; n >= 1; n--)
    {
        fac = fac * n;
    }
    printf("%llu\n", fac);

    return 0;
}