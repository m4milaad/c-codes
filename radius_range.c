#include <stdio.h>
#define PI 3.14159
void main()
{
    float rmin, rmax, a, c, v, swap;

    printf("Enter the value of Radius min-max: ");
    scanf("%f %f", &rmin, &rmax);

    if (rmin > rmax)
    {
        printf("You have entered the values incorrectly.\n");
        printf("Let me fix them for you.\n");
        swap = rmax;
        rmax = rmin;
        rmin = swap;
        printf("Min radius = %.2f\nMax val = %.2f\n", rmin, rmax);
    }

    for (; rmin <= rmax; rmin++)
    {
        a = PI * rmin * rmin, c = 4 * PI * rmin * rmin, v = (4 * PI * rmin * rmin) / 3;
        printf("Area of %.2f = %.2f\n", rmin, a);
        printf("Circumfrence of %.2f = %.2f\n", rmin, c);
        printf("Volume of %.2f = %.2f\n\n\n", rmin, v);
    }
}