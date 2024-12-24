#include <stdio.h>

int main()
{
    for (int n; n != 0;)
    {
        printf("Enter the value(Press 0 to terminate): ");
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d ", i);
            }
            printf("\n");
        }
    }
    return 0;
}