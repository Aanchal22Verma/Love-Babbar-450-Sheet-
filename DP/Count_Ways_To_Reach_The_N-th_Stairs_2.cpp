//bottom up approach

#define MOD 1000000007 //this is to avoid overflow
#include <bits/stdc++.h> 

int countDistinctWays(int nStairs) {
    //step 1
    vector<int> dp(nStairs+1);
    
    //base cases
    dp[0] = 1;
    dp[1] = 1;


    for(int i = 1; i<=nStairs; i++){
        dp[i] = (dp[i-1] + dp[i-2])%MOD;
    }
    
    return dp[nStairs];   
}
