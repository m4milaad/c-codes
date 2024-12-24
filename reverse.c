#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, rem = 0, sum = 0;

    printf("Enter any 3 digit number: ");
    scanf("%d", &n);

    for (int x = 100; n != 0;)
    {
        rem = n % 10;
        n /= 10;
        sum += rem * x;
        x /= 10;
    }

    printf("%d\n", sum);

    return 0;
}