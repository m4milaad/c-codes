#include <stdio.h>

int main()
{
    int s, t, f = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &s);

    int a[s];

    printf("Enter %d elements:\n", s);
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number to search for: ");
    scanf("%d", &t);

    for (int i = 0; i < s; i++)
    {
        if (a[i] == t)
        {
            printf("Number %d found at index %d.\n", t, i);
            f = 1;
            break;
        }
    }

    if (!f)
    {
        printf("Number %d not found in the array.\n", t);
    }

    return 0;
}
