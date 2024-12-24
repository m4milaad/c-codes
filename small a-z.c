#include <stdio.h>

int main(int argc, char const *argv[])
{
    char alp = 97;

    while (alp <= 122)
    {
        printf("%c ", alp);
        alp++;
    }

    return 0;
}