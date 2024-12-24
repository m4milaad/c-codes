#include <stdio.h>

int main()
{
    int n;
    printf("ENter the number of terms: ");
    scanf("%d", &n);

    for (size_t i = 0; i < n; i++)
    {
        printf("Number is: %zu and cube is %zu\n", i + 1, i * i * i);
    }
}