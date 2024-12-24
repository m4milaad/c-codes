#include <stdio.h>

int main()
{
    int sum = 0, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
        sum += i;
    }

    printf("\nThe sum of digits upto %d is  %d\n", n, sum);
}