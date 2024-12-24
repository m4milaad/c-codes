#include <stdio.h>

int main()
{
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];
    int sum = 0;

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }

    printf("Sum of even numbers: %d\n", sum);

    return 0;
}
