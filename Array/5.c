#include <stdio.h>

int main()
{
    int s;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &s);

    int a[s];

    printf("Enter %d elements:\n", s);
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The array is: ");
    for (int i = 0, j = s - 1; i < j; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    printf("Reversed array:\n");
    for (int i = 0; i < s; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
