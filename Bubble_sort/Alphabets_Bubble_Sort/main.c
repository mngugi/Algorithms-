#include <stdio.h>
#include "bubble_sort.h"

int main() {
    char *words[] = {
        "apple",
        "carrots",
        "oranges",
        "eggs",
        "milk",
        "bananas",
        "peach",
        "cabbages"
    };

    int n = sizeof(words) / sizeof(words[0]);

    printf("Original words:\n");
    print_strings(words, n);

    bubble_sort_strings(words, n);

    printf("\nSorted words:\n");
    print_strings(words, n);

    return 0;
}
