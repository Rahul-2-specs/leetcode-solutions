int lps(int i,int j,char* s,int dp[1001][1001])
{
    if(i>j)return 0;
    if(i==j)return 1;
    if(dp[i][j]!=-1)return dp[i][j];
    if(s[i]==s[j])
    {
        return dp[i][j]=2+lps(i+1,j-1,s,dp);
    }
    else
        return dp[i][j]=(lps(i + 1, j, s, dp) > lps(i, j - 1, s, dp) ? lps(i + 1, j, s, dp) : lps(i, j - 1, s, dp));
}

int longestPalindromeSubseq(char* s) {
    int n=strlen(s);
    int dp[1001][1001];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            dp[i][j]=-1;
        }
    }
    return lps(0,n-1,s,dp);
}