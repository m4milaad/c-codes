#include <stdio.h>

int power(int base, int exp)
{
    int result = 1;
    while (exp != 0)
    {
        result *= base;
        exp--;
    }
    return result;
}

int countDigits(int num)
{
    int count = 0;
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

int isArmstrong(int num)
{
    int numDigits = countDigits(num);
    int n = num, rem, result = 0;
    while (n != 0)
    {
        rem = n % 10;
        result += power(rem, numDigits);
        n /= 10;
    }
    return (result == num);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Armstrong numbers up to %d are:\n", n);
    for (int i = 1; i <= n; i++)
    {
        if (isArmstrong(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
