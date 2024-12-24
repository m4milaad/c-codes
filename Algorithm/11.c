#include <stdio.h>

int main()
{
    int emp, n = 1, ba, da, sal, noc;
    char name, gen, mar;
    while (n <= 5)
    {
        printf("Enter employee number, name, ba, da, gender, mar,noc: ");
        scanf("%d %c %d %d %c %c %d", &emp, &name, &ba, &da, &gen, &mar, &noc);
        sal = ba + da;
        if (gen == 'f')
        {
            sal += 100;
        }
        if (mar == 'y')
        {
            sal += 200;
        }
        if (noc == 1)
        {
            sal += 300;
        }
        if (noc == 2)
        {
            sal += 500;
        }
        if (noc == 3)
        {
            sal += 700;
        }
        if (noc > 3)
        {
            sal -= 200;
        }

        printf("%d %c's salary is %d\n", emp, name, sal);
        n++;
    }
    return 0;
}