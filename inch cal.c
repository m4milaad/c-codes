#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, y, f, i;
    printf("Enter inches iykyk: ");
    scanf("%d", &n);
    printf("Let me guess yours is far shorter than the value you enterted\n\n\n");
    y = n / 36,
    f = (n % 36) / 12,
    i = (n % 36) % 12;
    printf("Yards = %d\nFeets = %d\nInches = %d", y, f, i);
    return 0;
}