#include <stdint.h>

uint8_t bits_set(uint64_t n) {
    // Base case: zero bits set
    if (!n) return 0;

    uint64_t half_n = n >> 1;

    return bits_set(half_n) + (uint8_t) (n - (half_n << 1));

    /*
    // Ones bit was a zero    
    if (half_n << 1 == n) {
        return bits_set(half_n);
    }
    // Ones bit was a one
    return bits_set(half_n) + 1;
    */
}
