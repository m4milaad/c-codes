#include <stdio.h>

int main(int argc, char const *argv[])
{
    float i, c, m;
    printf("Enter the value in inches: ");
    scanf("%f", &i);

    m = i / 39.37;
    c = m * 100

        printf("The converted value of %f to cm is %f", i, c);

    return 0;
}