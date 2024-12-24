#include <stdio.h>

int main()
{
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    int element;
    printf("Enter the element to count: ");
    scanf("%d", &element);

    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            count++;
        }
    }

    printf("Frequency of %d: %d\n", element, count);

    return 0;
}
