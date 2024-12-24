#include <stdio.h>

int main()
{
    char str[100];
    int length = 0, i;

    printf("Input a string to reverse: ");
    scanf("%s", str);

    while (str[length] != '\0')
    {
        length++;
    }

    printf("Reversed string is: ");
    for (i = length - 1; i >= 0; i--)
    {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}
