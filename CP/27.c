#include <stdio.h>

int main()
{
    int number, sum_of_divisors = 0;

    printf("Input the number: ");
    scanf("%d", &number);

    printf("The positive divisors of %d are: ", number);
    for (int i = 1; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            printf("%d ", i);
            sum_of_divisors += i;
        }
    }
    printf("\n");

    printf("The sum of the divisors is: %d\n", sum_of_divisors);

    if (sum_of_divisors == number)
    {
        printf("So, the number %d is a perfect number.\n", number);
    }
    else
    {
        printf("So, the number %d is not a perfect number.\n", number);
    }

    return 0;
}
