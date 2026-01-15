#include <stdio.h>
#include "minlib.h"

int main() {
    int empty_arr[] = {12, 5, 7, 3, 19};
    int size = sizeof(empty_arr) / sizeof(empty_arr[0]);

    int min = min_val(empty_arr, size);

    printf("Minimum value: %d\n", min);

    return 0;
}
