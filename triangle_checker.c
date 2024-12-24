#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b)
    {
        printf("It is a valid triangle");
    }
    else
        printf("Lawde triangle nahi aata kya");

    return 0;
}
