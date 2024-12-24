#include <stdio.h>

int main()
{
    int s, p, e, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &s);

    int a[s + 1];

    printf("Enter %d elements:\n", s);
    for (i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the position to insert the new element (0 to %d): ", s);
    scanf("%d", &p);

    if (p < 0 || p > s)
    {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter the new element: ");
    scanf("%d", &e);

    for (i = s; i >= p; i--)
    {
        a[i + 1] = a[i];
    }

    a[p] = e;

    printf("Array after insertion:\n");
    for (i = 0; i <= s; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
