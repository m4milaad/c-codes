#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m = 1, n, r;

    printf("Enter the number of which you want the table and the number of multiples you want (separated by a space): ");
    scanf("%d %d", &n, &r);

    while (m <= r)
    {
        printf("%d\n", n * m); // Print the 1st R multiples of N
        m++;
    }

    return 0;
}
