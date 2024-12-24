#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, count=0,sum=0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The odd numbers are: ");

    for (size_t i = 0; count < n; i++)
    {
        if (i % 2 != 0)
        {
            count++;
            printf("%zu ", i);
            sum+=i;
        }
    }
printf("\nThe sum of odd numbers is %d\n",sum);
    return 0;
}
