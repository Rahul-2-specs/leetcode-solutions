int findMin(int* n, int ns) {
    if (ns==1)return n[0];
    if(n[0]<n[ns-1])return n[0]; 
    int left=0,right=ns-1;
    while(left<right)
    {
        int mid= (left+right)/2;
        if(n[mid]>n[mid+1])return n[mid+1];
        if(n[mid-1]>n[mid])return n[mid];
        if(n[mid]>n[0])left=mid+1;
        else right=mid-1;
    }
    return -1;
}