#include <stdio.h>

void printBinary(int octalDigit)
{
    switch (octalDigit)
    {
    case 0:
        printf("000");
        break;
    case 1:
        printf("001");
        break;
    case 2:
        printf("010");
        break;
    case 3:
        printf("011");
        break;
    case 4:
        printf("100");
        break;
    case 5:
        printf("101");
        break;
    case 6:
        printf("110");
        break;
    case 7:
        printf("111");
        break;
    default:
        printf("Invalid octal digit");
        return;
    }
}

int main()
{
    int octalNumber;
    printf("Enter an octal number: ");
    scanf("%o", &octalNumber);

    printf("The binary equivalent is: ");
    int octalDigit;
    while (octalNumber != 0)
    {
        octalDigit = octalNumber % 10;
        octalNumber /= 10;
        printBinary(octalDigit);
    }

    printf("\n");

    return 0;
}
