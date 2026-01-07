#include <stdio.h>
#include "bubble_sort.h"

int main() {
    int num_array[] = {1, 9, 4, 5, 6, 7, 8, 3, 2};
    int n = sizeof(num_array) / sizeof(num_array[0]);

    printf("Original array: ");
    print_array(num_array, n);

    bubble_sort(num_array, n);

    printf("Sorted array: ");
    print_array(num_array, n);

    return 0;
}
