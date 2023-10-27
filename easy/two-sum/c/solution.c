/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target) {
  int *res = (int *)malloc(2 * sizeof(int));

  for (int i = 0; i < numsSize; ++i) {
    for (int j = i+1; j < numsSize; ++j) {
      if (i != j && (nums[i] + nums[j] == target)) {
        res[0] = i;
        res[1] = j;
      }
    }
  }
  return res;
}

int main(void) {
  int *in = (int *)malloc(4 * sizeof(int));
  in[0] = 2;
  in[1] = 7;
  in[2] = 11;
  in[3] = 15;


  int *res = twoSum(in, 4, 17);

  
  for (int i = 0; i < 2; ++i) {
    printf("%d", res[i]);
  }
  putchar('\n');
}
