#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a = 4.5, b = 3.6, c = 7.3;
    float d;
    d = (int)((a * b) / c);

    printf("%f", d);
    return 0;
}