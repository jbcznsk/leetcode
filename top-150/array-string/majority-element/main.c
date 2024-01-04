#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include <limits.h>

int majorityElement(int* nums, int numsSize) {
    int* na = calloc(numsSize, sizeof(int));
    int* nb = calloc(numsSize, sizeof(int));

    int diff = 1;

    na[0] = nums[0];
    nb[0]++;

    for (int i = 1; i < numsSize; ++i) {
        int a = 1;
        for (int j = 0; j < diff; ++j) {
            if (nums[i] == na[j]){
                nb[j]++;
                a = 0;
                break;
            }
        }
        if (a) {
            na[diff] = nums[i];
            nb[diff]++;
            diff++;
        }
    }

    int me = na[0];
    int qme = 0;
    for (int i = 0; i < diff; ++i){
        if (nb[i] > qme) {
            qme = nb[i];
            me = na[i];
        }
    }
    return me;
}

int main(void) {

    int t = 1;
    int* nums = calloc(t, sizeof(int));
    for (int i = 0; i < t; ++i){
        nums[i] = 1;
    }

    assert(1 == majorityElement(nums, t));
    return 0;
}