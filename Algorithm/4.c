#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 1;

    do
    {
        printf("%d\n", n); // Print odd numbers up to 20
        n = n + 2;
    } while (n <= 20);

    return 0;
}
