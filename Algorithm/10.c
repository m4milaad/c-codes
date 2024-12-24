#include <stdio.h>

int main()
{
    int emp, n = 1, ba, da, sal;
    char name, gen, mar;
    while (n <= 5)
    {
        printf("Enter employee number, name, ba, da, gender, mar: ");
        scanf("%d %c %d %d %c %c", &emp, &name, &ba, &da, &gen, &mar);
        sal = ba + da;
        if (gen == 'f')
        {
            sal += 100;
        }
        if (mar == 'y')
        {
            sal += 200;
        }
        printf("%d %c's salary is %d\n", emp, name, sal);
        n++;
    }
    return 0;
}