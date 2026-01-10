#include <stdio.h>

void print_strings(char *arr[], int n);   // prototype

int main() {
    char *names[] = {"Alice", "Bob", "Charlie"};
    int n = 3;

    print_strings(names, n);
    return 0;
}

void print_strings(char *arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

