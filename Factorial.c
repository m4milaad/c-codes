#include <stdio.h>

int main()
{
    unsigned long long int fac = 1, n;

    printf("Enter the number: ");
    scanf("%llu", &n);

    while (n >= 1)
    {
        fac = fac * n--;
    }
    printf("%llu\n", fac);

    return 0;
}