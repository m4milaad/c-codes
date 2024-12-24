#include <stdio.h>

int main()
{
    int decimal;
    int octal[32];
    int index = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    int temp = decimal;

    while (temp > 0)
    {
        octal[index] = temp % 8;
        temp /= 8;
        index++;
    }

    printf("Octal equivalent: ");
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d", octal[i]);
    }
    printf("\n");

    return 0;
}
