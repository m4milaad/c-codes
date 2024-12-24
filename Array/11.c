#include <stdio.h>

int main() {
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];
    int sum = 0;

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    double avg = (double)sum / size;

    printf("Sum of the array: %d\n", sum);
    printf("Average of the array: %.2f\n", avg);

    return 0;
}
