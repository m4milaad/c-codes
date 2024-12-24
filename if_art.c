#include <stdio.h>

int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d", &a);

    if (a % 6 == 0 && a % 7 == 0)
    {
        printf("%d is divisible by both 6 and 7", a);
    }
    else if (a % 6 == 0)
    {
        printf("%d is divisible by 6, but not by 7", a);
    }
    else if (a % 7 == 0)
    {
        printf("%d is divisible by 7, but not by 6", a);
    }
    else
    {
        printf("%d is not divisible by both 6 and 7", a);
    }
    return 0;
}