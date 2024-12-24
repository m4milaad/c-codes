#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    int h = 0, m = 0, s = 0;
    for (; h < 24;)
    {
        printf("%02d:%02d:%02d\r", h, m, s);

        s++;
        sleep(1);
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
    }

    return 0;
}