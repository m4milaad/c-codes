#include <stdio.h>

long fact(int n)
{
    long res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

double power(double a, int b)
{
    double res = 1;
    for (int i = 1; i <= b; i++)
    {
        res *= a;
    }
    return res;
}

int main()
{
    double x;
    int n;

    printf("Enter the val of x: ");
    scanf("%lf", &x);

    printf("How many terms you want?: ");
    scanf("%d", &n);

    double sum = 1;
    int sign = -1;

    for (int i = 1; i < n; i++)
    {
        double term = power(x, 2 * i) / fact(2 * i);
        sum += sign * term;
        sign *= -1;
    }

    printf("The sum = %lf\n", sum);
    printf("Number of terms = %d\n", n);
    printf("Value of x = %lf\n", x);

    return 0;
}
