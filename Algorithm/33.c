#include <stdio.h>

int main()
{
    unsigned long long int n, nfac, r, rfac, a, afac, ncr;

    for (char dec = 'y'; dec == 'y' || dec == 'Y';)
    {

        printf("Enter the number(n r): ");
        scanf(" %llu %llu", &n, &r);
        a = n - r;

        for (nfac = 1; n >= 1; n--)
        {
            nfac = nfac * n;
        }
        for (rfac = 1; r >= 1; r--)
        {
            rfac = rfac * r;
        }
        for (afac = 1; a >= 1; a--)
        {
            afac = afac * a;
        }
        ncr = nfac / (rfac * afac);
        printf("%llu\n", ncr);

        printf("Do you want to continue(y/n): ");
        scanf(" %c", &dec);
    }
    return 0;
}