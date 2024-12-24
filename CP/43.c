#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Input 1st number for HCF: ");
    scanf("%d", &a);
    printf("Input 2nd number for HCF: ");
    scanf("%d", &b);


    if (b > a)
    {
        temp = a;
        a = b;
        b = temp;
    }
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF of the given numbers is: %d\n", a);

    return 0;
}
