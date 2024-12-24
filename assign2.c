#include <stdio.h>

int main()
{
    for (int n; n != 0;)
    {

        printf("Enter the value of n: ");
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
            for (int j = i - 1; j >= 1; j--)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
    }
    return 0;
}