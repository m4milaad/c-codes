#include <stdio.h>

int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; ++i)
    {
        f *= i;
    }
    return f;
}

int main()
{
    int n, t, sum = 0, r;

    printf("Enter the number: ");
    scanf("%d", &n);

    t = n;
    while (t != 0)
    {
        r = t % 10;
        sum += fact(r);
        t /= 10;
    }

    if (sum == n)
    {
        printf("%d is a Strong number.\n", n);
    }
    else
    {
        printf("%d is not a Strong number.\n", n);
    }

    return 0;
}
