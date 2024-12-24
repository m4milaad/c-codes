#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, count = 0, sum = 0;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("The even numbers are: ");
    for (size_t i = 2; count<a; i++)
    {
        if (i % 2 == 0)
        {
            count++;
            sum += i;
            printf("%zu ", i);
        }
    }
    printf("\nThe sum is %d\n", sum);
    return 0;
}
