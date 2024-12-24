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

int str(int n)
{
    int t = n, sum = 0, r;
    while (t != 0)
    {
        r = t % 10;
        sum += fact(r);
        t /= 10;
    }
    return sum == n;
}

int main()
{
    int s, e;

    printf("Input starting range of number: ");
    scanf("%d", &s);
    printf("Input ending range of number: ");
    scanf("%d", &e);

    printf("The Strong numbers are:\n");
    for (int i = s; i <= e; ++i)
    {
        if (str(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
