#include <stdio.h>

double median(int *array, int size) {
    int mid = size / 2;
    double result;
    if (size % 2 == 0) {
        result = (double)(array[mid - 1] + array[mid]) / 2;
    } else {
        result = (double)array[mid];
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    double m = median(arr, size);
    printf("The median of the array is: %lf\n", m);
    return 0;
}