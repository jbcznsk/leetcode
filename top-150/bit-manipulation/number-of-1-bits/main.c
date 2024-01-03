#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int hammingWeight(uint32_t n) {
    int o = 0;
    for (int i = 0; i < 32; ++i) {
        o += ((n >> i) & 1);
    }
    return o;
}

int main(void) {
    printf("%d\n", hammingWeight(0b11111111111111111111111111111111));
    return 0;
}