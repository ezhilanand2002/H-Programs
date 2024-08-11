#include <stdio.h>

void findFrequency(int arr[], int size) {
    int freq[100] = {0}; // Assuming maximum value is 99
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }
    for (int i = 0; i < 100; i++) {
        if (freq[i] != 0) {
            printf("Element %d: %d times\n", i, freq[i]);
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    findFrequency(arr, size);

    return 0;
}
