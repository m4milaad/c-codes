#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, y, w, d;
    printf("Enter days: ");
    scanf("%d", &n);
    y = n / 365,
    w = (n % 365) / 7,
    d = (n % 365) % 7;
    printf("Years = %d\nWeeks = %d\nDays = %d", y, w, d);
    return 0;
}