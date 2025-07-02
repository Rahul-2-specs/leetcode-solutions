int search(int* n, int ns, int tar) {
    int left=0,right=ns-1;
    while(left<=right)
    {
        int mid = (left+ right)/2;
        if(n[mid]==tar)return mid;
        if(tar >n[mid])left=mid+1;
        else right=mid-1;       
    }
    return -1;
    
}