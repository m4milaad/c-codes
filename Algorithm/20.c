#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n, r;

    printf("Enter the number of which you want the table, the starting point of the table, and the ending point of the table (separated by spaces): ");
    scanf("%d %d %d", &n, &m, &r);

    while (m <= r)
    {
        printf("%d x %d = %d\n", n, m, n * m); // Print multiples of N starting from N*S and stopping at N*R.
        m++;
    }

    return 0;
}
