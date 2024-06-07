#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = 1; j < n - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }*
int main() {
    int arr[10], n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    bubble_sort(arr, n);

    printf("Sorted array: \n");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);. 
    }

    return 0;
}