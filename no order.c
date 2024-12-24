#include <stdio.h>

int main()
{

    int number, previous_number, index = 1, count = 1;
    printf("Enter 5 integers seprated by carriage return:\n");
    scanf("%d", &previous_number);
    index = 1;
    count = 1;
    scanf("%d", &number);
    index = index + 1;
    if (previous_number > number)
        printf("The number in %d postion is out of order\n", index);
    else
    {
        count = count + 1;
        previous_number = number;
    }
    scanf("%d", &number);
    index = index + 1;
    if (previous_number > number)
        printf("The number in %d postion is out of order\n", index);
    else
    {
        count = count + 1;
        previous_number = number;
    }
    scanf("%d", &number);
    index = index + 1;
    if (previous_number > number)
        printf("The number in %d postion is out of order\n", index);
    else
    {
        count = count + 1;
        previous_number = number;
    }
    scanf("%d", &number);
    index = index + 1;
    if (previous_number > number)
        printf("The number in %d postion is out of order\n", index);
    else
    {
        count = count + 1;
        previous_number = number;
    }
    printf("%d numbers are in ascending order", count);

    return 0;
}