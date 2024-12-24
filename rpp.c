#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m, msave;
    printf("Enter two numbers seperated by ");
    scanf("%d %d", &n, &m);
    msave = m;
    for (; n >= 1;)
    {
        printf("%5d %12d\n\n", n, m);
        n /= 2;
        m *= 2;
    }
    msave += m;
    printf("%18d\n", msave);
    return 0;
}