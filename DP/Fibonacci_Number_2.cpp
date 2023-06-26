//bottom up Approach - Tabulation
class Solution {
public:

int fib(int n) {
        vector<int> dp(n+1, -1);
        dp[0] = 0;
        if(n==0)
            return 0;
        dp[1] = 1;

        for(int i = 2; i<= n; i++){
            dp[i] = dp[i-1] + dp[i-2]; 
        }
        
        return dp[n];
    }
};
//there can be multiple variants of this code
//in the case of n==0, the code can fail if you do not handle the case explicitly
//it fails because if n==0, you create a dp vector of size(1) but try to allocate dp[1] which is not possible
//so it gives you runtime error. 

//this error can be solved by explicitly handling the case of n==0 or creating a dp array of size n+2, so that you can still initialize dp[0] and dp[1].
