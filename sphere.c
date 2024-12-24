#include <stdio.h>

int main(int argc, char const *argv[])
{
    double r, v, a;

    printf("Please enter the radius of the cicle: ");
    scanf("%lf", &r);

    v = (4 * 3.1416) / 3 * (r * r * r);
    a = 4 * 3.1416 * (r * r);
    printf("The volume of the sphere with radius %lf is %lf and it's area is %lf", r, v, a);
    return 0;
}