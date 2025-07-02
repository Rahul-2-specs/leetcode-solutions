bool searchMatrix(int** m, int r, int* c, int tar) {
    int left=0,right=(*c)*r-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        int rowIdx=mid/(*c);
        int colIdx=mid%(*c);
        if(m[rowIdx][colIdx]==tar)return true;
        if(tar>m[rowIdx][colIdx])left=mid+1;
        else right=mid-1;
    }
    return false;
}