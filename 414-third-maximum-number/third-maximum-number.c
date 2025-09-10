int thirdMax(int* nums, int numsSize) {
    long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;

    for (int i = 0; i < numsSize; i++) {
        int x = nums[i];
        if (x == first || x == second || x == third) continue; // skip duplicates

        if (x > first) {
            third = second;
            second = first;
            first = x;
        } else if (x > second) {
            third = second;
            second = x;
        } else if (x > third) {
            third = x;
        }
    }

    return (third == LONG_MIN) ? (int)first : (int)third;
}