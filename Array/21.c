#include <stdio.h>

int main()
{
    int s;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &s);

    int a[s];
    int sm, ss, l, sl;

    printf("Enter %d elements:\n", s);
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }

    if (s < 2)
    {
        printf("Array should have at least two elements.\n");
        return 1;
    }

    sm = l = a[0];
    ss = sl = a[0];

    for (int i = 1; i < s; i++)
    {
        if (a[i] < sm)
        {
            ss = sm;
            sm = a[i];
        }
        else if (a[i] > sm && (ss == sm || a[i] < ss))
        {
            ss = a[i];
        }

        if (a[i] > l)
        {
            sl = l;
            l = a[i];
        }
        else if (a[i] > sl && a[i] < l)
        {
            sl = a[i];
        }
    }

    if (ss == sm)
    {
        printf("No second smallest element found.\n");
    }
    else
    {
        printf("Second smallest element: %d\n", ss);
    }

    if (sl == l)
    {
        printf("No second largest element found.\n");
    }
    else
    {
        printf("Second largest element: %d\n", sl);
    }

    return 0;
}
