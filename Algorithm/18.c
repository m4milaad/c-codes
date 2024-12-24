#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m = 1, n;

    printf("Enter the number of which you want the table of: ");
    scanf("%d", &n);

    while (m <= 10)
    {
        printf("%d\n", n * m);
        m++;
    }

    return 0;
}
