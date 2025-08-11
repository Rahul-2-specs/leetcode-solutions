void countDigits(int num, int *count) {
    memset(count, 0, 10 * sizeof(int));
    while (num > 0) {
        count[num % 10]++;
        num /= 10;
    }
}

bool reorderedPowerOf2(int n) {
    int countN[10];
    countDigits(n, countN);
    
    // Check all powers of 2 up to 2^30 (since 2^31 > 1e9)
    for (int i = 0; i < 31; i++) {
        int countPow[10];
        countDigits(1 << i, countPow);
        
        if (memcmp(countN, countPow, 10 * sizeof(int)) == 0) {
            return true;
        }
    }
    return false;
}