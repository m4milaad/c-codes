#include <stdio.h>

int main(int argc, char const *argv[])
{
    int r, eng, mat, sc, sst, ur, sum;
    char name;

    int n = 1;
    while (n <= 5)
    {
        printf("Enter the r.no, name , marks of english, math, science, social science, urdu: ");
        scanf("%d %c %d %d %d %d %d", &r, &name, &eng, &mat, &sc, &sst, &ur);
        sum = eng + mat + sc + sst + ur;
        if (eng >= 33 && mat >= 33 && sc >= 33 && sst >= 33 && ur >= 33)
        {
            printf("%d %c has passed and the marks are %d\n", r, name, sum);
        }
        else
            printf("%d %c has failed and the marks are %d\n", r, name, sum);
        n++;
    }
    return 0;
}
