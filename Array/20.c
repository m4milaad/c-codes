#include <stdio.h>

int main()
{
    int s;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &s);

    int a[s];
    int l, sl;

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

    l = sl = a[0];

    for (int i = 1; i < s; i++)
    {
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

    if (sl == l)
    {
        printf("No second largest element found.\n");
    }
    else
    {
        printf("Largest element: %d\n", l);
        printf("Second largest element: %d\n", sl);
    }

    return 0;
}
