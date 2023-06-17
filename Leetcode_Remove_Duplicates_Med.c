#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (nums == NULL || numsSize == 0) return 0;

    int storeIndex = 0;
    int i = 0;
    while (i < numsSize) {
        int count = 1;
        while (i < numsSize - 1 && nums[i] == nums[i + 1]) {
            i++;
            count++;
            if (i >= numsSize) goto OUT;
        }
        if (count >= 2) {
            nums[storeIndex++] = nums[i];
            nums[storeIndex++] = nums[i];
        }
        else {
            nums[storeIndex++] = nums[i];
        }
        i++;
    }
OUT:
    return storeIndex;
}
