#include <stdio.h>

// Function to display the binary representation of an unsigned integer
void displayBits(unsigned int num) {
    // Calculate the number of bits in the unsigned integer
    int numBits = sizeof(unsigned int) * 8;

    printf("Number of bits: %d\n", numBits);
    printf("Bits: ");

    // Print the bits in reverse order (from the most significant bit to the least significant bit)
    for (int i = numBits - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }

    printf("\n");
}

int main() {
    unsigned int number;
    
    printf("Enter an unsigned integer: ");
    scanf("%u", &number);

    displayBits(number);

    return 0;
}

