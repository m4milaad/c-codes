#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", i);
        sum += i;
    }
    printf("\nThe sum is %d\n", sum);
}