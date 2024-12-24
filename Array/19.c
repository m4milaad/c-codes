#include <stdio.h>

int main() {
    int s;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &s);

    int a[s];
    int ms, cs;

    printf("Enter %d elements:\n", s);
    for (int i = 0; i < s; i++) {
        scanf("%d", &a[i]);
    }

    ms = cs = a[0];

    for (int i = 1; i < s; i++) {
        if (cs > 0) {
            cs = cs + a[i];
        } else {
            cs = a[i];
        }
        if (cs > ms) {
            ms = cs;
        }
    }

    printf("Largest sum of contiguous subarray: %d\n", ms);

    return 0;
}
