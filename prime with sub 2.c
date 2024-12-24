#include <stdio.h>

int main()
{
    int num, count, div = 1, num_save;

    printf("Enter any number: ");
    scanf("%d", &num);
    num_save = num;

    for (count = 0; div <= num; div++)
    {
        while (div <= num)
        {
            num -= div;
        }
        if (num == 0)
        {
            count++;
        }
        num = num_save;
    }

    switch (count)
    {
    case 2:
        printf("%d is a prime number\n", num_save);
        break;
    default:
        printf("%d is not a prime number\n", num_save);
        break;
    }
    return 0;
}