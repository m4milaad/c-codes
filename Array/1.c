#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[7];
    for (size_t i = 0; i < 7; i++)
    {
        printf("Enter the %zu element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int max = 0;

    for (size_t i = 0; i < 7; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int min;
    min = max;
    for (size_t i = 0; i < 7; i++)
    {
    if (arr[i]<min)
    {
        min=arr[i];
    }
    }

    printf("\nMax = %d\nMin = %d\n",max,min);

    return 0;
}
