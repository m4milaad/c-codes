#include <stdio.h>

int p(int b, int e)
{
    int r = 1;
    for (int i = 0; i < e; i++)
    {
        r *= b;
    }
    return r;
}

int main()
{
    int s;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &s);

    int a[s];
    int an[s];
    int ac = 0;

    printf("Enter %d elements:\n", s);
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < s; i++)
    {
        int n = a[i];
        int orig = n;
        int d = 0;
        int sum = 0;

        while (n > 0)
        {
            n /= 10;
            d++;
        }

        n = orig;

        while (n > 0)
        {
            int dig = n % 10;
            sum += p(dig, d);
            n /= 10;
        }

        if (sum == orig)
        {
            an[ac++] = orig;
        }
    }

    printf("Armstrong numbers:\n");
    for (int i = 0; i < ac; i++)
    {
        printf("%d\n", an[i]);
    }

    return 0;
}
