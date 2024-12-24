#include <stdio.h>
#define PI 3.1416
int main(int argc, char const *argv[])
{
    double r, c, a;

    printf("Please enter the radius of the cicle: ");
    scanf("%lf", &r);

    c = (2 * 3.1416) * r;
    a = PI * (r * r);
    printf("\n\nThe circumfrence of the circle with radius %lf is %lf and it's area is %lf\n", r, c, a);
    return 0;
}