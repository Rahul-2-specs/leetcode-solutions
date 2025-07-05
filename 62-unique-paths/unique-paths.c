int up(int row, int col, int r,int c,int dp[101][101])
{
    if(row==r||col==c)return 0;
    if(row==r-1||col==c-1)
        return 1;
    if(dp[row][col]!=-1)return dp[row][col];
    return dp[row][col]=up(row+1,col,r,c,dp)+up(row,col+1,r,c,dp);    
}


int uniquePaths(int m, int n) {
    int dp[101][101];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            dp[i][j]=-1;
        }
    }
    return up(0,0,m,n,dp);
}