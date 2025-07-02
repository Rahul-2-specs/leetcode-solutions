int bs(int* n,int left, int right,int tar)
{   while(left<=right)
    {
        int mid=(left+right)/2;
        if(n[mid]==tar)return mid;
        if(tar>n[mid])left=mid+1;
        else right=mid-1;
    }
    return -1;
}
int findminIdx(int* a,int n)
{
    if(n==1 ||a[0]<a[n-1])return a[0];
    int left=0,right=n-1;
    while(left<right)
    {
        int mid= (left+right)/2;
        if(a[mid]>a[mid+1])return mid+1;
        if(a[mid-1]>a[mid])return mid;
        if(a[mid]>a[0])left=mid+1;
        else right=mid-1;
    }
    return -1;
}

int search(int* n, int ns, int tar) {
    int minIdx=findminIdx(n,ns);
    int ans=bs(n,0,minIdx-1,tar);
    if(ans!=-1)return ans;
    return bs(n,minIdx,ns-1,tar);
}