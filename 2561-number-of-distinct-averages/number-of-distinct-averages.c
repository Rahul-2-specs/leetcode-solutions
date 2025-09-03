int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int distinctAverages(int* nums, int ns) {
    qsort(nums,ns,sizeof(int),cmp);
    double seen[101*2];
    int sCount=0;
    for(int i=0;i<ns/2;i++)
    {
        double avg = (nums[i] + nums[ns - 1 - i]) / 2.0;

        bool exists = false;
        for (int j = 0; j < sCount; j++) {
            if (seen[j] == avg) {
                exists = true;
                break;
            }
        }
        if (!exists) {
            seen[sCount++] = avg;
        }
    }

    return sCount;
}
