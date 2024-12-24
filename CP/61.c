#include <stdio.h>

int main()
{
    int count = 0, lc, uc;
    char ch;
    int result;

    printf("Input characters (Ctrl + D for EOF): ");

    for (lc = 0, uc = 0; 1; count++)
    {
        result = scanf("%c", &ch);
        if (ch > 64 && ch < 91)
        {
            uc++;
        }
        if (ch > 96 && ch < 123)
        {
            lc++;
        }
        if (result == EOF)
        {
            break;
        }
    }

    printf("\nNumber of Characters: %d\n", count);
    printf("Capital chars = %d\nsmall chars = %d\n", uc, lc);
    return 0;
}
