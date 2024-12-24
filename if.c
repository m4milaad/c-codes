#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter any number: ");
    scanf("%d", &a);
    if (a % 4 == 0)
    {
        if (a % 100 != 0)

            printf("leap yr\n");
        else if (a % 400 == 0)
            printf("leap yr\n");
        else
            printf("not leap yr\n");
    }
    else
    {
        printf("not leap yr\n");
    }

    return 0;
}