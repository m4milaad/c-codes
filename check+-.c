#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    char con = 'y';

    while (con == 'y')
    {
        printf("Enter any number: ");
        scanf(" %d", &num);

        if (num < 0)
        {
            printf("%d is negative\n", num);
        }
        else if (num > 0)
        {
            printf("%d is positive\n", num);
        }
        else if (num == 0)
        {
            printf("Number is zero\n");
        }

        printf("Do you want to continue(yes/no): ");
        scanf(" %c", &con);
    }

    return 0;
}