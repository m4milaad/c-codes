#include <stdio.h>

int main(int argc, char const *argv[])
{
    float n, t, r;
    printf("Enter the first number of G.P: ");
    scanf("%f", &n);

    printf("Enter the common ratio: ");
    scanf("%f", &r);

    printf("Enter the number of terms: ");
    scanf("%f", &t);

    printf("%f ", n);

    for (size_t i = 1; i < t; i++)
    {
        printf("%.2f ", n *= r);
    }
    printf("\n");
    
    return 0;
}
