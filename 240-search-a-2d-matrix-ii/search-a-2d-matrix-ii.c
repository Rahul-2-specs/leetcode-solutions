bool searchMatrix(int** m, int r, int* c, int tar){
    int left=0,right=(*c)*r-1;
    for (int i = 0; i < r; i++) {
        int left=0,right=(*c)-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(m[i][mid]==tar)return true;
            if(tar>m[i][mid])left=mid+1;
            else right=mid-1;
        }
    }
    return false;
    
}