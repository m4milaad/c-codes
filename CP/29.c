#include <stdio.h>

int main() {
    int n, o, r, s = 0, t = 0, p;

    printf("Input a number: ");
    scanf("%d", &n);

    o = n;

    while (o != 0) {
        o /= 10;
        t++;
    }

    o = n;

    while (o != 0) {
        r = o % 10;
        p = 1;
        for (int i = 0; i < t; i++) {
            p *= r;
        }
        s += p;
        o /= 10;
    }

    if (s == n) {
        printf("%d is an Armstrong number\n", n);
    } else {
        printf("%d is not an Armstrong number\n", n);
    }

    return 0;
}
