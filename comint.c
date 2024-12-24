#include <stdio.h>

void main()
{
    double i = 0, p, r, d;
    printf("Enter the principal amount: ");
    scanf("%lf", &p);
    printf("Enter the rate of interest: ");
    scanf("%lf", &r);
    printf("Enter the time period: ");
    scanf("%lf", &d);
    
    r = (r / 365) + 1;                      // sets r to (r/365+1)
    
    double a;

    for (a = 1; d != 0; d--)                // a=(r+1)^d
    {
        a *= r;
    }

    i = (p * a) - p;

    printf("The interest is: $ %.2f\n\n", i);
}