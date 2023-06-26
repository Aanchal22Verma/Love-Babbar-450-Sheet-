//gives tle
#include <bits/stdc++.h> 
int solve(int n){
    //base case 1
    if(n==0)
        return 1;

    if(n<0)
        return 0;

    return solve(n-1)+ solve(n-2);
}
int countDistinctWays(int nStairs) {
    return solve(nStairs);
}
