#include <stdint.h>
#include <stdio.h>

// Helper function to print an 8-bit number in binary
void print_binary(uint8_t num) {
  for (int bit = 7; bit >= 0; bit--) {
    // Shift the desired bit to the rightmost position and mask it with 1
    printf("%d", (num >> bit) & 1);
  }
}

int main(void) {
  printf("Decimal | Binary\n");
  printf("--------|---------\n");

  // Loop through all 256 possible values of an unsigned byte (0 to 255)
  for (int i = 0; i <= 255; i++) {
    printf("  %5d | ", i);
    print_binary((uint8_t)i);
    printf("\n");
  }

  return 0;
}
