#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter the first number \"a\": ");
    scanf("%d", &a);
    printf("Enter the first number \"b\": ");
    scanf("%d", &b);
    printf("Enter the first number \"c\": ");
    scanf("%d", &c);

    int sum = ((a + c) * b / a);
    printf("Your answer is (%d+%d)*%d/%d = %d ", a, c, b, a, sum);
    return 0;
}