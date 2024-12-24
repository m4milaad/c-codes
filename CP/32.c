#include <stdio.h>

int main()
{
    int num, div = 1, count = 0, num_save;

    printf("Enter the number: ");
    scanf("%d", &num);
    num_save = num;

    while (div <= num)
    {
        while (div <= num)
        {
            num -= div;
        }
        if (num == 0)
        {
            count++;
        }
        div++;
        num = num_save;
    }

    if (count == 2)
    {
        printf("%d is a prime number\n", num_save);
    }
    else
    {
        printf("%d is not a prime number\n", num_save);
    }

    return 0;
}