#include <stdio.h>

int main()
{
    int a, b;

    printf("Input the starting range or number: ");
    scanf("%d", &a);

    printf("Input the ending range of number: ");
    scanf("%d", &b);

    printf("The Perfect numbers within the given range: ");
    for (int num = a; num <= b; num++)
    {
        int sum = 0;

        for (int i = 1; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }

        if (sum == num && num != 1)
        {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
