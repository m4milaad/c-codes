#include <stdio.h>

int main()
{
    int s;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &s);

    int a[s];
    int pos[s], neg[s], zero[s];
    int pc = 0, nc = 0, zc = 0;

    printf("Enter %d elements:\n", s);
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < s; i++)
    {
        if (a[i] > 0)
        {
            pos[pc++] = a[i];
        }
        else if (a[i] < 0)
        {
            neg[nc++] = a[i];
        }
        else
        {
            zero[zc++] = a[i];
        }
    }

    printf("Positive numbers:\n");
    for (int i = 0; i < pc; i++)
    {
        printf("%d ", pos[i]);
    }
    printf("\n");

    printf("Negative numbers:\n");
    for (int i = 0; i < nc; i++)
    {
        printf("%d ", neg[i]);
    }
    printf("\n");

    printf("Zeros:\n");
    for (int i = 0; i < zc; i++)
    {
        printf("%d ", zero[i]);
    }
    printf("\n");

    return 0;
}
