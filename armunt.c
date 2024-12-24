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
    int n, count = 0;
    printf("Enter the number of Armstrong numbers to find: ");
    scanf("%d", &n);

    printf("The first %d Armstrong numbers are:\n", n);
    int num = 1;
    while (count < n)
    {
        if (isArmstrong(num))
        {
            printf("%d\n", num);
            count++;
        }
        num++;
    }

    return 0;
}
