#include <stdio.h>

int main()
{
    int s, i, j, k, n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &s);

    int a[s];
    int t[s];

    printf("Enter %d elements:\n", s);
    for (i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }

    n = 0;

    for (i = 0; i < s; i++)
    {
        int isDup = 0;

        for (j = 0; j < n; j++)
        {
            if (a[i] == t[j])
            {
                isDup = 1;
                break;
            }
        }

        if (!isDup)
        {
            t[n] = a[i];
            n++;
        }
    }

    printf("Array after removing duplicates:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", t[i]);
    }
    printf("\n");

    return 0;
}
