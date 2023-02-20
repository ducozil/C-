#include <iostream>

int* reverseArray(int* arr, int size) {
    int* newArr = new int[size];
    for (int i = size - 1, j = 0; i >= 0; i--, j++) {
        newArr[j] = arr[i];
    }
    return newArr;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* reversedArr = reverseArray(arr, size);

    for (int i = 0; i < size; i++) {
        std::cout << reversedArr[i] << " ";
    }
    std::cout << std::endl;

    delete[] reversedArr;
    return 0;
}