#include <stdio.h>
#include <string.h>
#include "bubble_sort.h"

void bubble_sort_strings(char *arr[], int n){  // arr is an array of pointers
    // Each element arr[i] points to a string in memory.

    char *temp;

    for (int i = 0; i < n - 1; i++) { //i counts passes. Each pass pushes the largest string to the end.
        for (int j = 0; j < n - i - 1; j++) { // j iterates over unsorted elements.
            //n - i - 1 avoids comparing elements that are already in place.
            if (strcmp(arr[j], arr[j + 1]) > 0) { //strcmp(arr[j], arr[j+1]) compares the strings lexicographically.If arr[j] is alphabetically after arr[j+1], swap them
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void print_strings(char *arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}
