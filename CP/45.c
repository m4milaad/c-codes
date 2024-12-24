#include <stdio.h>

int main()
{
    int a, b, max, lcm;

    printf("Input 1st number for LCM: ");
    scanf("%d", &a);
    printf("Input 2nd number for LCM: ");
    scanf("%d", &b);

    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }

    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            lcm = max;
            break;
        }
        max++;
    }

    printf("The LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}
