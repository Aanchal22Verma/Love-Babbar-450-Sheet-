//gives tle
//recursion + memoization
#include <bits/stdc++.h> 
int solve(int n, vector<int> dp){
    //base case 1
    if(n==0)
        return 1;

    if(n<0)
        return 0;

    //step3
    if(dp[n]!=-1)
        return dp[n];

    //step2
    dp[n] = solve(n-1, dp)+ solve(n-2, dp);
    return dp[n];
}
int countDistinctWays(int nStairs) {
    //step 1
    vector<int> dp(nStairs+1, -1);
    return solve(nStairs, dp);
}
