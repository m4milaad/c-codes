#include <stdio.h>

int main()
{
    int s, pc = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &s);

    int a[s];
    int primes[s];

    printf("Enter %d elements:\n", s);
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < s; i++)
    {
        int num = a[i];
        int isPrime = 1;

        if (num <= 1)
        {
            isPrime = 0;
        }
        else
        {
            for (int j = 2; j * j <= num; j++)
            {
                if (num % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime)
        {
            primes[pc++] = num;
        }
    }

    printf("Prime numbers in the array:\n");
    for (int i = 0; i < pc; i++)
    {
        printf("%d ", primes[i]);
    }
    printf("\n");

    return 0;
}
