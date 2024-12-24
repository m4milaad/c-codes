#include <stdio.h>

int main()
{
    int a, b = 0, c;

    printf("Input a number: ");
    scanf("%d", &a);

    while (a != 0)
    {
        c = a % 10;
        b = b * 10 + c;
        a /= 10;
    }

    printf("The number in reverse order is: %d\n", b);

    return 0;
}
