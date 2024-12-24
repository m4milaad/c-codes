#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Enter the number you want to check: ");
    scanf("%d", &n);

    if (n % 2) // Check if a given number is even or odd
    {
        printf("%d is an odd number", n);
    }

    else
        printf("%d is an even number", n);

    return 0;
}
