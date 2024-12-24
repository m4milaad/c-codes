#include <stdio.h>

int main()
{
    int n;
    float avg, sum = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &n);
        sum += n;
    }
    avg = sum / 10;
    printf("\nSum of numbers is %.1f adn their avg is %.2f", sum, avg);
}