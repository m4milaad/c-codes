#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c = 1;

    do
    {
        printf("%d: Hello World\n", c); // Print hello 10 times
        c++;
    } while (c < 11);

    return 0;
}