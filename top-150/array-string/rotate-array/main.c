#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include <limits.h>

void rotate(int* nums, int numsSize, int k) {
    int* numsR = malloc(sizeof(int) * numsSize);
    for (int i = 0; i < numsSize; ++i) {
        numsR[(i+k)%numsSize] = nums[i];
    }
    for (int i = 0; i < numsSize; ++i) {
        nums[i] = numsR[i];
    }
}

int main(void) {

    return 0;
}