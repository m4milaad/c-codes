#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number upto you want to check for perfect numbers: ");
    scanf("%d", &n);

    for (size_t i = 1; i <= n; i++)
    {
        int sum = 0;

        for (size_t j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
            printf("%d ", i);
    }

    return 0;
}
