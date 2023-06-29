#include <stdio.h>

#define SET_ALL_BITS(num) ((num) | (~0))
#define CLEAR_ALL_BITS(num) ((num) & 0)
#define TOGGLE_ALL_BITS(num) ((num) ^ (~0))

int main() {
    int number, result;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Set all bits
    result = SET_ALL_BITS(number);
    printf("After setting all bits: %d\n", result);

    // Clear all bits
    result = CLEAR_ALL_BITS(number);
    printf("After clearing all bits: %d\n", result);

    // Toggle all bits
    result = TOGGLE_ALL_BITS(number);
    printf("After toggling all bits: %d\n", result);

    return 0;
}

