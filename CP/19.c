#include <stdio.h>

int main()
{
    int n;
    float sum = 0.0;

    printf("Input the number of terms: ");
    scanf("%d", &n);

    printf("Harmonic series:\n");
    for (int i = 1; i <= n; i++)
    {
        printf("1/%d + ", i);
        sum += 1.0 / i;
    }
    printf("\nSum of Series up to %d terms: %.6f\n", n, sum);

    return 0;
}
