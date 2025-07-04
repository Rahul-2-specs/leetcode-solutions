#include <stdlib.h>
int rob(int* n, int ns) {
    int dp[ns+1];
    dp[0]=0;
    dp[1]=n[0];
    for(int i=1;i<ns;i++)
    {
        dp[i+1]=fmax(dp[i],dp[i-1]+n[i]);
    }
    return dp[ns];
}