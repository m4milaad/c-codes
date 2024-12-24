#include <stdio.h>

int main()
{
    int a, b, i, j, count;

    printf("Input starting number of range: ");
    scanf("%d", &a);

    printf("Input ending number of range: ");
    scanf("%d", &b);

    printf("The prime numbers between %d and %d are:\n", a, b);

    for (i = a; i <= b; i++)
    {
        if (i == 1)
        {
            continue;
        }
        count = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                count = 0;
                break;
            }
        }
        if (count == 1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
