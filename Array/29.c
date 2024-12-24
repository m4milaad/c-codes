#include <stdio.h>

int main()
{
    int s, i, j;
    int oddCount = 0, evenCount = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &s);

    int a[s];
    int odd[s];
    int even[s];

    printf("Enter %d elements:\n", s);
    for (i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < s; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[evenCount++] = a[i];
        }
        else
        {
            odd[oddCount++] = a[i];
        }
    }

    printf("Even numbers:\n");
    for (j = 0; j < evenCount; j++)
    {
        printf("%d ", even[j]);
    }
    printf("\n");

    printf("Odd numbers:\n");
    for (j = 0; j < oddCount; j++)
    {
        printf("%d ", odd[j]);
    }
    printf("\n");

    return 0;
}
