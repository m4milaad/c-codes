#include <stdio.h>

int main() {
    int n;
    double x, sum = 0, term;
    int sign = 1;


    printf("Input the value of x: ");
    scanf("%lf", &x);

    printf("Input number of terms: ");
    scanf("%d", &n);

    for (size_t i = 0; i < n; i++) {
        term = 1;
        for (int j = 0; j < 2 * i + 1; j++) {
            term *= x;
        }
        sum += sign * term;
        sign = -sign; 
    }

    printf("The sum is: %lf\n", sum);

    return 0;
}
