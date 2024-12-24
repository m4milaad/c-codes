#include <stdio.h>
#define EPSILON 0.0001
int main()
{
    float x, sqrt();
    printf("Enter the number: ");
    scanf("%f", &x);
    printf("Square root of %f is %f", x, sqrt(x));
    return 0;
}

float sqrt(n)
float n;
{
    float guess;
    if (n >= 0)
    {
        for (guess = n / 2.0; guess * guess - n > EPSILON || guess * guess - n < -EPSILON; guess = (guess + n / guess) / 2.0);
        return guess;
    }
    else
    {
        return (-1.0);
    }
}
