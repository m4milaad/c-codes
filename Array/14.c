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

    for (int i = 0; i < s - 1; i++)
    {
        for (int j = 0; j < s - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < s; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}