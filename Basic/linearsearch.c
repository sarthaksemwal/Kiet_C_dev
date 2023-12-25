#include <stdio.h>

// Function for linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index if the key is found
        }
    }
    return -1; // Return -1 if the key is not found
}

int main() {
    int n, key;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the key to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Perform linear search
    int result = linearSearch(arr, n, key);

    // Output the result
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
