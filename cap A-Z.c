#include <stdio.h>

int main(int argc, char const *argv[])
{
    char alp = 65;

    while (alp <= 90)
    {
        printf("%c ", alp);
        ++alp;
    }

    return 0;
}