#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter an Interger which you think is divisible by 5: ");
    scanf("%d", &a);

    b = a / 5;
    c = b * 5;

    if (a == c)
    {
        printf("Your number is evenly divisible by 5");
    }
    else
    {
        printf("Please learn table of 5");
    }

    return 0;
}