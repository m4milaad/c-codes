#include <stdio.h>

int main(int argc, char const *argv[])
{
    float p, r, n, t, x, y, res;
    printf("Enter the values in p r n t format: ");
    scanf("%f %f %f %f", &p, &r, &n, &t);

    r /= 100;
    x = n * t;
    y = 1 + r / n;
    res = p;

    for (int z = 1; z <= x; z++)
    {
        res *= y;
    }
    printf("Compound Interest: %.2f\n", res);
    return 0;
}