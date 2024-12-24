#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("The square Natural upto %d terms are: ", n);

    for (size_t i = 1; i <= n; i++)
    {
        printf("%zu ", i * i);
        sum += i * i;
    }
    printf("\nThe sum of %d terms is %d\n",n, sum);

    return 0;
}
