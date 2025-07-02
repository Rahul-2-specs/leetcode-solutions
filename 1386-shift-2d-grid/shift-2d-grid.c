/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** shiftGrid(int** m, int r, int* col, int k, int* rs, int** rcs) {
    int i,j;
    int c=*col;
    int total=r*c;
    int** res=(int**)malloc(r*sizeof(int*));
    *rcs=(int*)malloc(r*sizeof(int));
    for(i=0;i<r;i++)
    {
        res[i]=(int*)malloc(c*sizeof(int));
        (*rcs)[i]=c;
    }    
    *rs=r;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            int idx=(i*c+j+k)%total;
            int rowIdx=idx/c;
            int colIdx=idx%c;
            res[rowIdx][colIdx]=m[i][j];
        }
    }
    return res;
}