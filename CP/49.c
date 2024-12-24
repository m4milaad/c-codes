#include <stdio.h>

int main()
{
    int s, n, d;
    int sum = 0;

    printf("Input the starting number of the A.P. series: ");
    scanf("%d", &s);
    printf("Input the number of items for the A.P. series: ");
    scanf("%d", &n);
    printf("Input the common difference of A.P. series: ");
    scanf("%d", &d);

    printf("The Sum of the A.P. series are :\n");
    for (int i = 0; i < n; ++i)
    {
        if (i > 0)
        {
            printf(" + ");
        }
        printf("%d", s + i * d);
        sum += s + i * d;
    }
    printf(" = %d\n", sum);

    return 0;
}
