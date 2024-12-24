#include <stdio.h>

int main()
{
    int decimalnumber;

    printf("Input a decimal number: ");
    scanf("%d", &decimalnumber);

    printf("Binary number equivalent to said decimal number is: ");

    for (int a = 31; a >= 0; a--)
    {
        int b = (decimalnumber >> a) & 1;
        printf("%d", b);

        if (a % 4 == 0 && a != 0)
        {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
