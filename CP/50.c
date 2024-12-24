#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number in decimal: ");
    scanf("%d", &n);

    printf("%d in octal is %o\n",n,n);
    return 0;
}
