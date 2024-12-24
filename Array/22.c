#include <stdio.h>

int findMax(int arr[], int start, int end)
{
    if (start == end)
    {
        return arr[start];
    }

    int mid = (start + end) / 2;
    int leftMax = findMax(arr, start, mid);
    int rightMax = findMax(arr, mid + 1, end);

    return (leftMax > rightMax) ? leftMax : rightMax;
}

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

    int max = findMax(a, 0, s - 1);

    printf("Largest element in the array: %d\n", max);

    return 0;
}
