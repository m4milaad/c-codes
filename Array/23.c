#include <stdio.h>

int findMaxDiff(int a[], int s, int e)
{
    if (s == e)
    {
        return 0;
    }

    int m, n;
    int mid = (s + e) / 2;

    m = n = a[s];

    for (int i = s; i <= mid; i++)
    {
        if (a[i] > m)
            m = a[i];
        if (a[i] < n)
            n = a[i];
    }

    int lMax = m;
    int lMin = n;

    m = n = a[mid + 1];

    for (int i = mid + 1; i <= e; i++)
    {
        if (a[i] > m)
            m = a[i];
        if (a[i] < n)
            n = a[i];
    }

    int rMax = m;
    int rMin = n;

    int lDiff = lMax - lMin;
    int rDiff = rMax - rMin;
    int cDiff = rMax - lMin;
    if (rMin - lMax > cDiff)
    {
        cDiff = rMin - lMax;
    }

    int maxDiff = lDiff;
    if (rDiff > maxDiff)
    {
        maxDiff = rDiff;
    }
    if (cDiff > maxDiff)
    {
        maxDiff = cDiff;
    }

    return maxDiff;
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

    int maxDiff = findMaxDiff(a, 0, s - 1);

    printf("Maximum difference between two elements: %d\n", maxDiff);

    return 0;
}
