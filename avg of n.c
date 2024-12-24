#include <stdio.h>

void main()
{
    float n, sum, i;
    for (i = 0, sum = 0, n = 1; n != 0; i++)
    {
        printf("Enter value of n(0 to exit): ");
        scanf(" %f", &n);
        sum += n;
    }
    printf("Average is %.3f\n", sum / --i);
}