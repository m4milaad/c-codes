#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, count, sum = 0;
    printf("Enter the number you want to check: ");
    scanf("%d", &n);
    printf("The positive divisor: ");
    for (size_t i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%zu ", i);
            sum += i;
        }
    }

    if (sum == n)
        printf("\n\t\t\tPerfect Number\n");
    else
        printf("\nNot perfect\n");
    printf("The sum of divisor is %d\n", sum);
    return 0;
}
