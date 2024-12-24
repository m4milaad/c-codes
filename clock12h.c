#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    int h = 12, m = 0, s = 0, p = 0;
    for (; p < 2;)
    {
        if (p % 2 == 0)
        {
            printf("%02d:%02d:%02d AM\r", h, m, s);
        }
        else
        {
            printf("%02d:%02d:%02d PM\r", h, m, s);
        }
        sleep(1);
        s++;
        if (s == 60)
        {
            s = 0;
            m++;
        }
        if (m == 60)
        {
            m = 0;
            h++;
        }
        if (h == 13)
        {
            h = 1;
            p++;
        }
    }

    return 0;
}