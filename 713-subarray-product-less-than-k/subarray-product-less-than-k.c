int numSubarrayProductLessThanK(int* n, int ns, int k) {
    if (k<=1)return 0;
    long long product = 1;
    int count=0;
    int left =0;
    for(int right=0;right<ns;right++)
    {
        product *=n[right];
        while(product>=k)
        {
            product/=n[left];
            left++;
        }
        count+=(right-left)+1;
    }
    return count;
}