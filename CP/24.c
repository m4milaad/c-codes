#include <stdio.h>

int power(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int x, num_terms;
    int term, sum = 0;
    int sign = 1;

    printf("Input the value of x: ");
    scanf("%d", &x);

    printf("Input number of terms: ");
    scanf("%d", &num_terms);

    printf("The values of the series:\n");

    for (size_t i = 0; i < num_terms; i++)
    {
        term = power(x, 2 * i + 1) * sign;
        printf("%d\n", term);
        sum += term;
        sign = -sign;
    }

    printf("The sum = %d\n", sum);

    return 0;
}
