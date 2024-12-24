#include <stdio.h>

int main()
{
    int s, e, i, j;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &s);

    int a[s + 1];

    printf("Enter %d sorted elements:\n", s);
    for (i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &e);

    i = 0;
    while (i < s && a[i] < e)
    {
        i++;
    }

    for (j = s; j >= i; j--)
    {
        a[j + 1] = a[j];
    }

    a[i] = e;

    printf("Array after insertion:\n");
    for (i = 0; i <= s; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
