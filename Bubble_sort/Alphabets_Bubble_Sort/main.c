#include <stdio.h>
#include "bubble_sort.h"

int main() {
    char *words[] = {
        "Apple",
        "Carrots",
        "Oranges",
        "Eggs",
        "Milk",
        "Bananas",
        "Peach",
        "Cabbages"
    };

    int n = sizeof(words) / sizeof(words[0]);

    printf("Original Words:\n");
    print_strings(words, n);

    bubble_sort_strings(words, n);

    printf("\nSorted Words:\n");
    print_strings(words, n);

    return 0;
}
