#include <stdio.h>

int main(int argc, char const *argv[])
{
    float r, pi = 3.14, vs;

    for (r != 0; r > 0;)
    {
        printf("Enter the radius of the circle: ");
        scanf("%f", &r);
        vs = (4 * pi * r * r * r) / 3;
        printf("Volume of Sphere is %f\n", vs);
    }

    return 0;
}