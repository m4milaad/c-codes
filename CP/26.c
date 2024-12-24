#include <stdio.h>

int main()
{
    int count;
    long term = 0, sum = 0;
    int current_number = 1;

    printf("Input the number of terms: ");
    scanf("%d", &count);

    printf("The series: ");

    for (int i = 0; i < count; i++)
    {
        term = term * 10 + 1;
        printf("%ld", term);
        
        if (i < count - 1)
        {
            printf(" + ");
        }

        sum += term;
    }

    printf("\nThe Sum is: %ld\n", sum);

    return 0;
}
