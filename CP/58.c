#include <stdio.h>

int main()
{
    char arr[100];
    int length = 0;

    printf("Input a string: ");
    scanf("%s", arr);

    while (arr[length] != '\0')
    {
        length++;
    }

    printf("The string contains %d number of characters.\n", length);
    printf("So, the length of the arring %s is: %d\n", arr, length);

    return 0;
}
