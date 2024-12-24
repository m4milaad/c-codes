#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m = 1;
    while (m <= 10)
    {
        printf("%d\n", 2 * m); // Print 1st 10 multiples of 2
        m++;
    }

    return 0;
}
