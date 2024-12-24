#include <stdio.h>

int main()
{
    int a, b = 0, c, d;

    printf("Input a number: ");
    scanf("%d", &a);

    d = a;

    while (a != 0)
    {
        c = a % 10;
        b = b * 10 + c;
        a /= 10;
    }

    if (d == b)
    {
        printf("%d is a palindrome number.\n", d);
    }
    else
    {
        printf("%d is not a palindrome number.\n", d);
    }

    return 0;
}
