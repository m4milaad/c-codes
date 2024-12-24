#include <stdio.h>

int main(int argc, char const *argv[])
{
        int j_d, y, f, h, f_h;
        printf("Please enter the year: ");
        scanf("%d", &y);

        printf("\nPlease enter the date as per Julian date: ");
        scanf("%d", &j_d);

        f = (y - 1) / 4,
        h = (y - 1) / 100,
        f_h = (y - 1) / 400;

        int dotw = (y + j_d + f - h + f_h) % 7;
        switch (dotw)
        {
        case 0:
                printf("Saturday\n");
                break;
        case 1:
                printf("Sunday\n");
                break;
        case 2:
                printf("Monday\n");
                break;
        case 3:
                printf("Tuesday\n");
                break;
        case 4:
                printf("Wednesday\n");
                break;
        case 5:
                printf("Thursday\n");
                break;
        case 6:
                printf("Friday\n");
                break;
        default:
                printf("Something went wrong, try again!");
        }
        return 0;
}