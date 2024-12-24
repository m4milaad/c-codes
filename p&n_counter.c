#include <stdio.h>

int main()
{
    int n, p = 0, d = 0;

    while (n != 0)
    {
        printf("Enter any number (non zero):");
        scanf("%d", &n);

        if (n > 0)
        {
            p++;
        }
        // if (n<0)
        else
        {
            d++;
        }

        printf("%d\n", n);
    }

    printf("%d numbers are positive\n", p);
    printf("%d numbers were negative\n", d);

    return 0;
}