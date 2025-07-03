#include <limits.h>
int nthSuperUglyNumber(int n, int* p, int ps) {
    int dp[n],i,min;
    int idx[ps];
    dp[0]=1;
    for(i=0;i<ps;i++)idx[i]=0;
    for(i=1;i<n;i++)
    {
        long long min = LLONG_MAX;
        for(int j=0;j<ps;j++)
        {
            long long cand=(long long)p[j]*dp[idx[j]];
            if(cand<min)min=cand;
        }
        dp[i]=min;
        for(int j=0;j<ps;j++)
        {
            if((long long)p[j]*dp[idx[j]]==min)idx[j]++;
        }
    }
    return (int)dp[n-1];
    
}