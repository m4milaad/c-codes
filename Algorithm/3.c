#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 0;

    do
    {
        printf("%d\n", n); // Print even numbers up to 20
        n = n + 2;
    } while (n <= 20);

    return 0;
}
