#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t reverseBits(uint32_t n) {
    uint32_t res = 0;
    for (uint i = 0; i < 32; ++i) {
        res += (uint32_t)(((n << i) & 2147483648) >> 31) * (1 << i);
    }
    return res;
}

int main(void) {
    // uint32_t in = 0b10000000000000000000000000000000;
    uint32_t in = 0b11111111111111111111111111111101;

    printf("%u\n", reverseBits(in));
    return 0;
}

