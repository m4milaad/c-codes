#include <stdio.h>

int main()
{
    int s, p, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &s);

    int a[s];

    printf("Enter %d elements:\n", s);
    for (i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the position of the element to delete (0 to %d): ", s - 1);
    scanf("%d", &p);

    if (p < 0 || p >= s)
    {
        printf("Invalid position!\n");
        return 1;
    }

    for (i = p; i < s - 1; i++)
    {
        a[i] = a[i + 1];
    }

    printf("Array after deletion:\n");
    for (i = 0; i < s - 1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
