int** generate(int n, int* rs, int** rcs) {
    *rs=n;
    int** triangle=(int**)malloc(n*sizeof(int*));
    *rcs=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        triangle[i]=(int*)malloc((i+1)*sizeof(int));
        (*rcs)[i]=i+1;
        triangle[i][0]=1;
        triangle[i][i]=1;
        for(int j=1;j<i;j++)
        {
            triangle[i][j]=triangle[i-1][j-1]+triangle[i-1][j];
        }
    }
    return triangle;
}