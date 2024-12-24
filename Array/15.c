#include <stdio.h>

int main()
{
    int s, c = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &s);

    int a[s];
    int counted[s];
    int count[s];

    printf("Enter %d elements:\n", s);
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < s; i++)
    {
        int f = 0;
        for (int j = 0; j < c; j++)
        {
            if (a[i] == counted[j])
            {
                f = 1;
                break;
            }
        }
        if (!f)
        {
            counted[c] = a[i];
            count[c] = 1;
            for (int k = i + 1; k < s; k++)
            {
                if (a[k] == a[i])
                {
                    count[c]++;
                }
            }
            c++;
        }
    }

    printf("Number occurrences:\n");
    for (int i = 0; i < c; i++)
    {
        printf("Number %d occurs %d times\n", counted[i], count[i]);
    }

    return 0;
}
