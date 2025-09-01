int findDuplicate(int* n, int ns) {
    int low=1,high=ns-1;
    while(low<high)
    {
        int mid=low+(high-low)/2;
        int count=0;
        for(int i=0;i<ns;i++)
        {
            if (n[i]<=mid) count++;
        }
            if (count>mid) high=mid;
            else low=mid+1;
    }
    return low;
}