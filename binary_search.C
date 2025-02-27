#include <stdio.h>

int binarySearch(int a[], int beg, int end, int val) {
    int mid;
    if (end >= beg) {
        mid = (beg + end) / 2;

        // If the item to be searched is present at middle
        if (a[mid] == val) {
            return mid; // Return the 0-based index
        }

        // If the item to be searched is smaller than middle, it can only be in the left subarray
        else if (a[mid] > val) {
            return binarySearch(a, beg, mid - 1, val); // Search in the left subarray
        }

        // If the item to be searched is greater than middle, it can only be in the right subarray
        else {
            return binarySearch(a, mid + 1, end, val); // Search in the right subarray
        }
    }
    return -1; // If the element is not found
}

void main() {
    int a[] = {11, 14, 25, 30, 40, 41, 52, 57, 70}; // Given sorted array
    int val = 40; // Value to be searched
    int n = sizeof(a) / sizeof(a[0]); // Size of array
    int res = binarySearch(a, 0, n - 1, val); // Call binarySearch
    
    // Printing the elements of the array
    printf("The elements of the array are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    // Printing the element to be searched
    printf("\nElement to be searched is: %d", val);

    // Checking and printing the result
    if (res == -1) {
        printf("\nElement is not present in the array.");
    } else {
        printf("\nElement is present at %d position (0-based index).", res);
    }
}
