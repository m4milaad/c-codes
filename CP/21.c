#include <stdio.h>

int main()
{
    int n, term = 9, sum = 0;

    printf("Input the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", term);
        sum += term;
        term = term * 10 + 9;
    }

    printf("\nThe sum of the series = %d\n", sum);

    return 0;
}
