#include <string.h>
int minD(char *word1,char *word2,int len1,int len2,int dp[501][501])
{
    if(len1==0)return len2;
    if(len2==0)return len1;
    if(dp[len1][len2]!=-1)
        return dp[len1][len2];
    if(word1[len1-1]==word2[len2-1])
        return dp[len1][len2]=minD(word1,word2,len1-1,len2-1,dp);
    else
    {
        int io=1+minD(word1,word2,len1,len2-1,dp);
        int de=1+minD(word1,word2,len1-1,len2,dp);
        int re=1+minD(word1,word2,len1-1,len2-1,dp);
        return dp[len1][len2]=fmin(io,fmin(de,re));
    }
}

int minDistance(char* word1, char* word2) {
    int len1=strlen(word1);
    int len2=strlen(word2);
    int dp[501][501];
    for(int i=0;i<=len1;i++)
    {
        for(int j=0;j<=len2;j++)
        {
            dp[i][j]=-1;
        }
    }
    return minD(word1,word2,len1,len2,dp);
}