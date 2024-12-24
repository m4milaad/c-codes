#include <stdio.h>

int main()
{
    int num, div = 1, count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (div <= num)
    {
        if (num % div == 0)
        {
            count++;
        }
        div++;
    }

    switch (count)
    {
    case 2:
        printf("%d is a prime number\n", num);
        break;
    default:
        printf("%d is not a prime number\n", num);
        break;
    }
    return 0;
}