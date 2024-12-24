#include <stdio.h>

int main()
{
    int emp, n = 1, ba, da, sal;
    char name, gen;
    while (n <= 5)
    {
        printf("Enter employee number, name, ba, da, gender: ");
        scanf("%d %c %d %d %c", &emp, &name, &ba, &da, &gen);
        sal = ba + da;
        if (gen == 'f')
        {
            sal += 100;
        }

        printf("%d %c's salary is %d\n", emp, name, sal);
        n++;
    }
    return 0;
}