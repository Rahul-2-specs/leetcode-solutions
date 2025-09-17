#include <stdio.h>
#include <stdlib.h>

// comparator for qsort on ints
int cmp_int(const void *a, const void *b) {
    int x = *(const int*)a;
    int y = *(const int*)b;
    return (x > y) - (x < y);
}

int findLHS(int* nums, int numsSize) {
    if (numsSize <= 1) return 0;
    qsort(nums, numsSize, sizeof(int), cmp_int);

    int ans = 0;
    int i = 0;
    while (i < numsSize) {
        // count how many times nums[i] repeats
        int j = i + 1;
        while (j < numsSize && nums[j] == nums[i]) j++;
        int count_i = j - i;

        // check the next distinct value (starts at j)
        if (j < numsSize && nums[j] == nums[i] + 1) {
            // count how many times the next value repeats
            int k = j + 1;
            while (k < numsSize && nums[k] == nums[j]) k++;
            int count_next = k - j;
            if (ans < count_i + count_next) ans = count_i + count_next;
        }

        // move to the next distinct value
        i = j;
    }

    return ans;
}
