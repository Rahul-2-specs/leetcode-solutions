int numOfSubarrays(int* a, int as, int k, int t) {
    int count=0;
    int target=k*t;
    long int windowsum=0;
    for(int i=0;i<k;i++)
    {
        windowsum+=a[i];
    }
    if(windowsum>=target)count++;
    for(int i=k;i<as;i++)
    {
        windowsum+=a[i]-a[i-k];
        if(windowsum>=target)count++;
    }
    return count;
}