#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 0, m;
    printf("Enter numbers until you want to print even numbers: ");
    scanf("%d", &m);

    while (n <= m)
    {
        printf("%d\n", n); // Take input N from user and print even numbers up to N
        n = n + 2;
    }

    return 0;
}
