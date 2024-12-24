#include <stdio.h>

int main()
{
    int s, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &s);

    int a[s];

    printf("Enter %d elements:\n", s);
    for (i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array in reverse order:\n");
    for (i = s - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
