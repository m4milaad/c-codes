#include <stdio.h>

int findHCF(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int a, b, hcf, lcm;

    printf("Input 1st number for LCM: ");
    scanf("%d", &a);
    printf("Input 2nd number for LCM: ");
    scanf("%d", &b);

    hcf = findHCF(a, b);
    lcm = (a * b) / hcf;

    printf("The LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}
