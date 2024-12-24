#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter any number in octadecimal format: ");
    scanf("%d", &n);
    printf("The number %d in hexadecimal format is %x\n",n,n);

    return 0;
}
