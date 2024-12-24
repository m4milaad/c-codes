#include <stdio.h>

int main(int argc, char const *argv[])
{
    int r, eng, mat, sc, sst, ur;
    char name;

    int n = 1;
    while (n <= 5)
    {
        int sum = 0, count = 0;
        printf("Enter the r.no, name , marks of english, math, science, social science, urdu: ");
        scanf("%d %c %d %d %d %d %d", &r, &name, &eng, &mat, &sc, &sst, &ur);
        if (eng >= 33)
        {
            sum += eng;
            count++;
        }
        if (mat >= 33)
        {
            sum += mat;
            count++;
        }
        if (sc >= 33)
        {
            sum += sc;
            count++;
        }
        if (sst >= 33)
        {
            sum += sst;
            count++;
        }
        if (ur >= 33)
        {
            sum += ur;
            count++;
        }
        if (count == 5)
        {
            printf("Roll no. %d, %c is \"promoted\" with a total score of %d\n", r, name, sum);
        }
        else if (count == 4)
        {
            printf("Roll no. %d, %c has to \"reappear\" with a total score of %d\n", r, name, sum);
        }
        else if (count == 3)
        {
            printf("Roll no. %d, %c is in \"compartment\" with a total score of %d\n", r, name, sum);
        }
        else if (count == 2)
        {
            printf("Roll no. %d, %c is \"carry on\" with a total score of %d\n", r, name, sum);
        }
        else
        {
            printf("Roll no. %d, %c is \"not promoted\" with a total score of %d\n", r, name, sum);
        }

        n++;
    }
    return 0;
}
