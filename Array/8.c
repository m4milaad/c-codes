#include <stdio.h>

int main()
{
    int size1, size2;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &size1);
    int arr1[size1];

    printf("Enter %d elements for the first array:\n", size1);
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &size2);
    int arr2[size2];

    printf("Enter %d elements for the second array:\n", size2);
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < size1; i++)
    {
        sum1 += arr1[i];
    }

    for (int i = 0; i < size2; i++)
    {
        sum2 += arr2[i];
    }

    printf("Sum of the first array: %d\n", sum1);
    printf("Sum of the second array: %d\n", sum2);

    if (sum1 > sum2)
    {
        printf("The first array has a larger sum.\n");
    }
    else if (sum1 < sum2)
    {
        printf("The second array has a larger sum.\n");
    }
    else
    {
        printf("Both arrays have the same sum.\n");
    }

    return 0;
}
