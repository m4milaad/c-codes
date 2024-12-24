#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a octal number: ");
    scanf("%o", &n);

    printf("%o in decimal is %d\n",n,n);
    return 0;
}
