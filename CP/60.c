#include <stdio.h>

int main()
{
    int count = 0;
    char ch;
    int result;

    printf("Input characters: ");

    while (1)
    {
        result = scanf("%c", &ch);
        if (result == EOF)
        {
            break;
        }
        count++;
    }

    printf("Number of Characters: %d\n", count);
    return 0;
}
