#include <stdio.h>

int main()
{
    int s, i, last;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &s);

    int a[s];

    printf("Enter %d elements:\n", s);
    for (i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }

    last = a[s - 1];

    for (i = s - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }

    a[0] = last;

    printf("Array after cyclic permutation:\n");
    for (i = 0; i < s; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
