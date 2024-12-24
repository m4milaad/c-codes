#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    char dec = 'y';

    while (dec == 'y' || dec == 'Y')
    {
        printf("Enter any number: ");
        scanf(" %d", &n);

        if (n < 0)
        {
            printf("%d is Negative.\n", n);
        }
        else if (n > 0)
        {
            printf("%d is Positive.\n", n);
        }
        else if (n == 0)
        {
            printf("Your number is Zero.\n");
        }

        printf("Do you want to continue(Y/N): ");
        scanf(" %c", &dec);
    }

    return 0;
}