/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* fairCandySwap(int* alice, int aliceSize, int* bob, int bobSize, int* returnSize) {
    long sumA = 0, sumB = 0;
    for (int i = 0; i < aliceSize; i++) sumA += alice[i];
    for (int j = 0; j < bobSize; j++) sumB += bob[j];

    int diff = (sumA - sumB) / 2; // a - b = diff

    // Put Bob’s candies in a hash set
    int maxCandy = 100001; 
    char* seen = calloc(maxCandy, sizeof(char));
    for (int j = 0; j < bobSize; j++) {
        seen[bob[j]] = 1;
    }

    // Find valid pair
    int* ans = malloc(2 * sizeof(int));
    for (int i = 0; i < aliceSize; i++) {
        int a = alice[i];
        int b = a - diff;
        if (b >= 1 && b < maxCandy && seen[b]) {
            ans[0] = a;
            ans[1] = b;
            *returnSize = 2;
            free(seen);
            return ans;
        }
    }

    *returnSize = 0;
    free(seen);
    return NULL;
}