#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare an array to hold the elements
    int array[n];
 // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Display prime numbers from the array
    printf("Prime numbers in the array are:\n");
    for (int i = 0; i < n; i++) {
        if (isPrime(array[i])) {
            printf("%d ", array[i]);
        }
 printf("Prime numbers in the array are:\n");
    for (int i = 0; i < n; i++) {
        if (isPrime(array[i])) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    return 0;
}
