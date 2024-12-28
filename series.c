#include <stdio.h>
#include <math.h>
int fact(int a)
{
    int fact = 1;
    for (size_t i = a; i != 1; i--)
        fact *= i;
    return fact;
}
int power(int b, int p)
{
    int pow = 1;
    while (p--)
    {
        pow *= b;
    }
    return pow;
}

int main(int argc, char const *argv[])
{
    int x, t;
    scanf("%d %d", &x, &t);
    int t_save = t;

    if (t == 1)
    {
        printf("1\n");
        return 0;
    }
    float result = 1;
    int sign = 1;
    float n = 0;
    while (--t)
    {
        sign *= -1;
        n += 2;
        float p, f;
        p = power(x, n);
        f = fact(n);
        result += sign * (p / f);
    }
    printf("The sum = %f\n", result);
    printf("Number of terms = %d\n", t_save);
    printf("Value of x = %d\n", x);

    return 0;
}
