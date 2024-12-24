#include <stdio.h>

int main()
{
    int num, i, j, p1, p2;
    int found = 0;

    printf("Input a positive integer: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (i = 2; i <= num / 2; i++)
    {
        p1 = i;
        p2 = num - i;

        int pr1 = 1;
        for (j = 2; j * j <= p1; j++)
        {
            if (p1 % j == 0)
            {
                pr1 = 0;
                break;
            }
        }

        int pr2 = 1;
        for (j = 2; j * j <= p2; j++)
        {
            if (p2 % j == 0)
            {
                pr2 = 0;
                break;
            }
        }

        if (pr1 && pr2)
        {
            printf("%d = %d + %d\n", num, p1, p2);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", num);
    }

    return 0;
}
