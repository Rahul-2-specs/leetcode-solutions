#define MOD 1000000007

int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int numSubseq(int* nums, int numsSize, int target) {
    qsort(nums, numsSize, sizeof(int), cmp);

    // Precompute powers of 2
    long *pow2 = malloc((numsSize+1) * sizeof(long));
    pow2[0] = 1;
    for (int i = 1; i <= numsSize; i++) {
        pow2[i] = (pow2[i-1] * 2) % MOD;
    }

    long res = 0;
    int i = 0, j = numsSize - 1;

    while (i <= j) {
        if (nums[i] + nums[j] <= target) {
            res = (res + pow2[j - i]) % MOD;
            i++;
        } else {
            j--;
        }
    }

    free(pow2);
    return (int)res;
}