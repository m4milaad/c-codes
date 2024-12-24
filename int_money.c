#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a = 3.27,
          b = 6.45,
          c = 9.82,
          d = 2.13,
          e = 7.89,
          f = (int)(a + b + c + d + e);

    printf("%f", f);
    return 0;
}